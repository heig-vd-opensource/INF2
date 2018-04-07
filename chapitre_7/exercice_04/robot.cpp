#include "robot.h"

Robot::Robot(int initPosition) : m_position(initPosition){
    m_direction = Direction::DROITE;
}

void Robot::demiTour() {
    switch (m_direction) {
        case Direction::DROITE:
            m_direction = Direction::GAUCHE;
            break;
        case Direction::GAUCHE:
            m_direction = Direction::DROITE;
            break;
    }
}

void Robot::deplacer(const unsigned int nbUnites) {
    switch (m_direction){
        case Direction::GAUCHE:
            m_position += -nbUnites;
            break;
        case Direction::DROITE:
            m_position += nbUnites;
            break;
    }
}

int Robot::getPosition() const{
    return m_position;
}
