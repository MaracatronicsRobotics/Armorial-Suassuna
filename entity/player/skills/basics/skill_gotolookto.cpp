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

#include "skill_gotolookto.h"
#include <entity/player/skills/skills_include.h>

QString Skill_GoToLookTo::name() {
    return "Skill_GoToLookTo";
}

Skill_GoToLookTo::Skill_GoToLookTo() {
    _aimPosition = Position(false, 0.0, 0.0, 0.0);
    _desiredPosition = Position(true, 0.0, 0.0, 0.0);
    _avoidTeammates = true;
    _avoidOpponents = true;
    _avoidBall = true;
    _avoidOurGoalArea = true;
    _avoidTheirGoalArea = true;
    _minVelocity = 0.0;
}

void Skill_GoToLookTo::run() {
    player()->goToLookTo(_desiredPosition, _aimPosition, _avoidTeammates, _avoidOpponents, _avoidBall, _avoidOurGoalArea, _avoidTheirGoalArea, _minVelocity);
}
