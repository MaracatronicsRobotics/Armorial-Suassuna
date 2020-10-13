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

#include "sslstrategy_halt.h"
#include <entity/contromodule/strategy/strategystate.h>
#pragma GCC diagnostic ignored "-Wunused-parameter"

QString SSLStrategy_Halt::name() {
    return "SSLStrategy_Halt";
}

SSLStrategy_Halt::SSLStrategy_Halt() {
    _pb_attack = NULL;
    _pb_defense = NULL;
}

void SSLStrategy_Halt::configure(int numOurPlayers) {
    usesPlaybook(_pb_defense = new Playbook_Defense());
    usesPlaybook(_pb_attack = new Playbook_Attack());
}

void SSLStrategy_Halt::run(int numOurPlayers) {
    if(getParam() == 0){
        quint8 goalie = dist()->getGK();
        if(PlayerBus::ourPlayerAvailable(goalie)){
            _pb_defense->addPlayer(goalie);
            _pb_defense->setGoalieId(goalie);
        }

        QList<quint8> players = dist()->getAllKNN(loc()->ourGoal());
        int total = players.size();
        int num_atack = (total)/2;
        int num_def = total - num_atack;

        for(int x = 0; x < players.size(); x++){
            quint8 id = players.at(x);
            if(num_def){
                _pb_defense->addPlayer(id);
                num_def--;
            }
            else
                _pb_attack->addPlayer(id);
        }
    }else{
        //std::cout << "atacando" << std::endl;
        quint8 goalie = dist()->getGK();
        if(PlayerBus::ourPlayerAvailable(goalie)){
            _pb_defense->addPlayer(goalie);
            _pb_defense->setGoalieId(goalie);
        }

        QList<quint8> players = dist()->getAllKNN(loc()->ourGoal());
        int total = players.size();
        int num_atack = (total+1)/2;
        int num_def = total - num_atack;

        for(int x = 0; x < players.size(); x++){
            quint8 id = players.at(x);
            if(num_def){
                _pb_defense->addPlayer(id);
                num_def--;
            }
            else
                _pb_attack->addPlayer(id);
        }
    }
}
