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

#ifndef SKILL_GOTOLOOKTO_H
#define SKILL_GOTOLOOKTO_H

#include <entity/player/skills/skill.h>

class Skill_GoToLookTo : public Skill {
private:
    void run();
    Position _desiredPosition;
    Position _aimPosition;
    bool _avoidTeammates;
    bool _avoidOpponents;
    bool _avoidBall;
    bool _avoidOurGoalArea;
    bool _avoidTheirGoalArea;
    float _minVelocity;

public:
    Skill_GoToLookTo();
    QString name();

    void setDesiredPosition(Position pos) { _desiredPosition = pos; }
    void setAimPosition(Position pos) { _aimPosition = pos; }
    void setAvoidTeammates(bool cond) { _avoidTeammates = cond; }
    void setAvoidOpponents(bool cond) { _avoidOpponents = cond; }
    void setAvoidBall(bool cond) { _avoidBall = cond; }
    void setAvoidOurGoalArea(bool cond) { _avoidOurGoalArea = cond; }
    void setAvoidTheirGoalArea(bool cond) { _avoidTheirGoalArea = cond; }
    void setMinVelocity(float minVelocity) { _minVelocity = minVelocity; }
};

#endif // SKILL_GOTOLOOKTO_H
