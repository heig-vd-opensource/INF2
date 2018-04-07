#ifndef EXERCICE_04_ROBOT_H
#define EXERCICE_04_ROBOT_H

namespace Direction {
    enum Value {GAUCHE, DROITE};
}

class Robot {
public:
    Robot(int initPosition = 0);

    void demiTour();
    void deplacer(const unsigned nbUnites = 1);
    int getPosition() const;

private:
    Direction::Value m_direction;
    int m_position;
};


#endif //EXERCICE_04_ROBOT_H
