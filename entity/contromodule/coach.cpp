/***
 * Maracatronics Robotics
 * Federal University of Pernambuco (UFPE) at Recife
 * http://www.maracatronics.com/
 *
 * This file is part of Armorial project.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 ***/

#include "coach.h"

#include <entity/contromodule/mrcteam.h>
#include <entity/player/playerbus.h>
#include <entity/contromodule/coachutils.h>

#include <entity/coachview/mainwindow.h>

QString Coach::name(){
    return "Coach";
}

Coach::Coach(SSLReferee *ref, MRCTeam *ourTeam, MRCTeam *theirTeam, MRCConstants *mrcconstants)
{
    _ref = ref;
    _ourTeam = ourTeam;
    _theirTeam = theirTeam;
    _mrcconstants = mrcconstants;
    danger = false;
    param = false;

    // Initialize PlayerBus
    PlayerBus::initialize(ourTeam, theirTeam);

    // Load agressivity constraints
    loadClusters();
    _lastAgressivity = "";

    // Coach utils
    _utils = new CoachUtils(ourTeam);

    // null strat
    _strat = NULL;

    //game info
    _gameInfo = _ref->getGameInfo(_ourTeam->teamColor());
}

Coach::~Coach(){
    if(_strat != NULL)
        delete _strat;

    delete _utils;
}

StrategyState* Coach::getStrategyState(){
    return strategy()->getLastStrategy();
}

std::vector<double> Coach::getEnemyGaussiansInAreas(){
    std::vector<double> proportions;
    for(int x = 0; x < 5; x++) proportions.push_back(0.0);

    if(_ourTeam->fieldSide().isLeft()){
        QList<Player*> enemyPlayers = _theirTeam->avPlayers().values();
        QList<Player*>::iterator it;
        for(it = enemyPlayers.begin(); it != enemyPlayers.end(); it++){
            if((*it)->position().x() >= -4.5 && (*it)->position().x() <= -3.0){
                proportions[0] += 1.0;
            }
            else if((*it)->position().x() > -3.0 && (*it)->position().x() <= -1.5){
                proportions[1] += 1.0;
            }
            else if((*it)->position().x() > -1.5 && (*it)->position().x() <= 1.5){
                proportions[2] += 1.0;
            }
            else if((*it)->position().x() > 1.5 && (*it)->position().x() <= 3.0){
                proportions[3] += 1.0;
            }
            else if((*it)->position().x() > 3.0 && (*it)->position().x() <= 4.5){
                proportions[4] += 1.0;
            }
        }
    }
    else{
        QList<Player*> enemyPlayers = _theirTeam->avPlayers().values();
        QList<Player*>::iterator it;
        for(it = enemyPlayers.begin(); it != enemyPlayers.end(); it++){
            if((*it)->position().x() >= -4.5 && (*it)->position().x() <= -3.0){
                proportions[4] += 1.0;
            }
            else if((*it)->position().x() > -3.0 && (*it)->position().x() <= -1.5){
                proportions[3] += 1.0;
            }
            else if((*it)->position().x() > -1.5 && (*it)->position().x() <= 1.5){
                proportions[2] += 1.0;
            }
            else if((*it)->position().x() > 1.5 && (*it)->position().x() <= 3.0){
                proportions[1] += 1.0;
            }
            else if((*it)->position().x() > 3.0 && (*it)->position().x() <= 4.5){
                proportions[0] += 1.0;
            }
        }
    }

    int locBall = -1;
    if(_ourTeam->fieldSide().isLeft()){
        if(_ourTeam->loc()->ball().x() >= -4.5 &&_ourTeam->loc()->ball().x() <= -3.0){
            locBall = 1;
        }
        else if(_ourTeam->loc()->ball().x() > -3.0 && _ourTeam->loc()->ball().x() <= -1.5){
            locBall = 2;
        }
        else if(_ourTeam->loc()->ball().x() > -1.5 && _ourTeam->loc()->ball().x() <= 1.5){
            locBall = 3;
        }
        else if(_ourTeam->loc()->ball().x() > 1.5 && _ourTeam->loc()->ball().x() <= 3.0){
            locBall = 4;
        }
        else if(_ourTeam->loc()->ball().x() > 3.0 && _ourTeam->loc()->ball().x() <= 4.5){
            locBall = 5;
        }
    }
    else{
        if(_ourTeam->loc()->ball().x() >= -4.5 &&_ourTeam->loc()->ball().x() <= -3.0){
            locBall = 5;
        }
        else if(_ourTeam->loc()->ball().x() > -3.0 && _ourTeam->loc()->ball().x() <= -1.5){
            locBall = 4;
        }
        else if(_ourTeam->loc()->ball().x() > -1.5 && _ourTeam->loc()->ball().x() <= 1.5){
            locBall = 3;
        }
        else if(_ourTeam->loc()->ball().x() > 1.5 && _ourTeam->loc()->ball().x() <= 3.0){
            locBall = 2;
        }
        else if(_ourTeam->loc()->ball().x() > 3.0 && _ourTeam->loc()->ball().x() <= 4.5){
            locBall = 1;
        }
    }

    for(int x = 0; x < 5; x++){
        if(locBall == -1) break; // vision error?

        double sigma = 1.0;
        double mi = locBall;
        double delta_x = (x + 1);

        double t1 = (1.0 / (sigma * sqrt(2.0 * M_PI)));
        double t2_up = (-1.0/2.0) * pow(((delta_x - mi)/sigma), 2);
        double t2_f = exp(t2_up);
        double gauss = (t1 * t2_f);

        proportions[x] = proportions[x] * gauss;
    }

    return proportions;
}

void Coach::loadClusters(){
    QString settings;
    QFile file;
    file.setFileName("../const/agressivity_clusters.json");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    settings = file.readAll();
    file.close();

    QJsonDocument sd = QJsonDocument::fromJson(settings.toUtf8());
    QJsonObject sett2 = sd.object();

    QStringList keys = sett2.keys();
    for(int x = 0; x < keys.size(); x++){
        QJsonObject structure = (sett2.value(keys.at(x))).toObject();
        QJsonArray data = structure.take("clusters").toArray();
        std::vector<std::vector<double>> all_vec;
        for(int y = 0; y < data.size(); y++){
            QJsonValue parse_data = data.at(y);
            QJsonArray parse_data_arr = parse_data.toObject().value(QString("values")).toArray();
            std::vector<double> vec_aux;
            for(int z = 0; z < parse_data_arr.size(); z++){
                vec_aux.push_back(parse_data_arr.at(z).toDouble());
            }
            all_vec.push_back(vec_aux);
        }
        _agressivityClusters.insert(keys.at(x).toStdString(), all_vec);
    }

    std::cout << "[COACH] Agressivity clusters loaded." << std::endl;
}

namespace std
{
  int inline qHash(const std::string& key, uint seed = 0)
  {
    return qHash(QByteArray::fromRawData(key.data(), key.length()), seed);
  }
}

std::string Coach::calculateAgressivity(std::vector<double> &gaussians){
    QHash<std::string, std::vector<std::vector<double>>>::iterator it;
    std::string best_ans = "";
    double dist = 1e9;
    for(it = _agressivityClusters.begin(); it != _agressivityClusters.end(); it++){
        double dist_now = 0.0;
        for(int x = 0; x < it.value().size(); x++){
            dist_now = 0;
            for(int y = 0; y < gaussians.size(); y++){
                dist_now += pow((gaussians.at(y) - it.value().at(x).at(y)), 2);
            }
            dist_now = sqrt(dist_now);
            if(dist_now < dist){
                dist = dist_now;
                best_ans = it.key();
            }
        }
    }

    return best_ans;
}

void Coach::run(){
    if(_ourTeam->avPlayersSize() == 0){
        std::cout << MRCConstants::defaultBold << "[COACH] " << MRCConstants::red << "No players available!" << MRCConstants::reset << std::endl;
        return ;
    }

    std::vector<double> gaussians = getEnemyGaussiansInAreas();
    _lastAgressivity = calculateAgressivity(gaussians);

    // get strategy
    Strategy *strat = strategy();

    //0 atack, 1 defesa
    // bora descidir qual vai ser o parametro meus jovens
    // aqui:
    double decision;
    //aqui entra uma porrada de pesos
    //
    //std::cout << "tempo: " << _gameInfo->refTimeLeftToUnsignedInt() << std::endl;
    //std::cout << "Nossos gols: " << _gameInfo->ourTeamInfo().score() << "\n";
    //std::cout << "Deles  gols: " << _gameInfo->theirTeamInfo().score() << "\n";
    //std::cout << "Nossos players: " << _ourTeam->avPlayersSize() << "\n";
    //std::cout << "Deles players: " << _theirTeam->avPlayersSize() << "\n";
    //se for no primeiro tempo soma mais 300 no tempo
    if(!(_gameInfo->canKickBall())){
        double tempo = _gameInfo->refTimeLeftToUnsignedInt();
        if(_gameInfo->stage() == Referee_Stage::Referee_Stage_NORMAL_FIRST_HALF){
            tempo += 300;
        }
        int nossos_gols =_gameInfo->ourTeamInfo().score();
        int deles_gols = _gameInfo->theirTeamInfo().score();
        bool tamo_ganhando = (nossos_gols > deles_gols);
        bool tamo_perdendo = (nossos_gols < deles_gols);
        bool empatado = (nossos_gols == deles_gols);
        double dif_gols = (double)(nossos_gols - deles_gols)/10.0;
        double razao_qtd = (double)((double)_ourTeam->avPlayersSize() / (double)_theirTeam->avPlayersSize());
        tempo = (double)tempo/600.0;
        //empatado
        if(empatado){
            if(!danger){
                if(razao_qtd >= 1){
                    decision = -1;
                }else{
                    decision = 1;
                }
            }else{
                if(razao_qtd > 1){
                    decision = -1;
                }else{
                    decision = 1;
                }
            }
        }

        if(tamo_ganhando){
            if(razao_qtd == 1){
                decision = ((1/tempo)/20.0) - dif_gols;
            }else if(razao_qtd > 1){
                decision = -1;
            }else{
                decision = 1;
            }
        }

        if(tamo_perdendo){
            if(razao_qtd == 1){
                if(!danger){
                    if(dif_gols <= -0.3){
                        danger = true;
                        decision = 1;
                    }else{
                        decision = -1;
                    }
                }else{
                    decision = 1;
                }
            }else if(razao_qtd > 1){
                decision = -1;
            }else{
                decision = 1;
            }
        }
        //
        //isso tudo pra calcular decision
        //e finalmente a gente usa decision
        if(decision >= 0){
            param = true;
        }else{
            param = false;
        }
    }
    // run strategy
    if(strat != NULL && getConstants()!=NULL){
        if(strat->isInitialized() == false){
            strat->initialize(_ref, _ourTeam, _theirTeam, _utils, getConstants());
        }
        strat->runStrategy(AgressivityLevel(10), param);
    }
}

AgressivityLevel Coach::agressivityToEnum(std::string agressivity){

    if(agressivity == "High_Attack")         return AgressivityLevel::HIGH_ATTACK;
    else if(agressivity == "Medium_Attack")  return AgressivityLevel::MEDIUM_ATTACK;
    else if(agressivity == "Equilibrated")   return AgressivityLevel::EQUILIBRATED;
    else if(agressivity == "Medium_Defense") return AgressivityLevel::MEDIUM_DEFENSE;
    else if(agressivity == "High_Defense")   return AgressivityLevel::HIGH_DEFENSE;
    else                                     return AgressivityLevel::EQUILIBRATED;
}

QString Coach::getAgressivity(){
    return _lastAgressivity.c_str();
}

void Coach::setStrategy(Strategy *strat){
    _mutexStrategy.lock();

    // deleting old strategy
    if(_strat != NULL){
        delete _strat;
    }

    //setting new
    _strat = strat;

    _mutexStrategy.unlock();
}

Strategy* Coach::strategy(){
    _mutexStrategy.lock();
    Strategy *s = _strat;
    _mutexStrategy.unlock();

    return s;
}

MRCConstants *Coach::getConstants() {
    if(_mrcconstants==NULL)
        std::cout << MRCConstants::red << "[ERROR] " << MRCConstants::reset << name().toStdString() << ", requesting getConstants(), _mrcconstants not initialized!\n";
    return _mrcconstants;
}

