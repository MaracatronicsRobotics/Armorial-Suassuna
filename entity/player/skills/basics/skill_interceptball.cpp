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

#include "skill_interceptball.h"
#include <entity/player/skills/skills_include.h>
#include <bits/stdc++.h>

QString Skill_InterceptBall::name() {
    return "Skill_interceptBall";
}

Skill_InterceptBall::Skill_InterceptBall() {
    setInterceptAdvance(false);
    _speedFactor = 1.0;
    _useKickDevice = false;
    _posLook = Position(false, 0.0, 0.0, 0.0);
}

void Skill_InterceptBall::run() {
    if(_posLook.isUnknown())
        _posLook = loc()->ball();
    /* calculating projection of ball */
    Position objectivePos; // Position where the goalkeeper should be

    // Unitary velocity vector (project point at goal)
    const Velocity ballVelocity = loc()->ballVelocity();
    const Position posBall = loc()->ball();
    const Position unitaryBallVelocity = Position(true, ballVelocity.x()/ballVelocity.abs(), ballVelocity.y()/ballVelocity.abs(), 0.0);

    // Check ball speed (maybe a error)
    if(ballVelocity.abs() <= 0.1f)
        objectivePos = loc()->ball(); // manter posicao
    else{
        // Now ball velocity line (pos + uni_velocity vector)
        const Position ballVelocityLine = Position(true, posBall.x()+unitaryBallVelocity.x(), posBall.y()+unitaryBallVelocity.y(), 0.0);

        // Call utils to get projection
        objectivePos = WR::Utils::projectPointAtLine(posBall, ballVelocityLine, player()->position()); //Intercepta em 90 graus

        // Check if use kick bar
        if(_useKickDevice){
            Position kickDevicePosition = WR::Utils::getPlayerKickDevice(player()->playerId());
            Position playerPosition = player()->position();

            Position newPos = Position(true, playerPosition.x() - kickDevicePosition.x(), playerPosition.y() - kickDevicePosition.y(), 0.0);
            newPos.setPosition(newPos.x() + objectivePos.x(), newPos.y() + objectivePos.y(), 0.0);

            objectivePos = newPos;
        }
    }

    CoachView::drawLine(loc()->ball(), objectivePos, RGBA(255, 0.0, 0.0, 1.0, MRCConstants::robotZ + 0.03));

    if(_interceptAdvance)
        objectivePos = WR::Utils::threePoints(objectivePos, loc()->ball(), getConstants()->getBallRadius(), 0.0);

    // Avoid player to enter in goal areas
    if((player()->playerId() != getConstants()->getGoalieId()) && (loc()->isInsideOurArea(objectivePos) || loc()->isInsideTheirArea(objectivePos))){
        objectivePos = player()->position();
    }

    float velocityNeeded = (ballVelocity.abs() * player()->distanceTo(objectivePos)) / (WR::Utils::distance(posBall, objectivePos));

    player()->goToLookTo(objectivePos, _posLook, true, true, false, false, false, _speedFactor * velocityNeeded);

    player()->dribble(true);
}
