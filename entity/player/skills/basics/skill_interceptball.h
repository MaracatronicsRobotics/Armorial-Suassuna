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

#ifndef SKILL_INTERCEPTBALL_H
#define SKILL_INTERCEPTBALL_H

#include <entity/player/skills/skill.h>

class Skill_InterceptBall : public Skill {
private:
    void run();
    bool _interceptAdvance;
    Position _posLook;
    float _speedFactor;
    bool _useKickDevice;
public:
    Skill_InterceptBall();
    QString name();

    void setInterceptAdvance(bool interceptAdvance) { _interceptAdvance = interceptAdvance; }
    void setPositionToLook(const Position &posLook) { _posLook = posLook; }
    void setSpeedFactor(float speedFactor) { _speedFactor = speedFactor; }
    void setUseKickDevice(bool useKickDevice) { _useKickDevice = useKickDevice; }
};

#endif // SKILL_INTERCEPTBALL_H
