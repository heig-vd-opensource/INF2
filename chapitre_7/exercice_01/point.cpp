#include "point.h"

#include <iostream>

Point::Point(float x, float y) : m_x(x), m_y(y) {

}

void Point::deplacer(float dx, float dy) {
    m_x += dx;
    m_y += dy;
}

void Point::afficher() const {
    std::cout << "(" << m_x << "," << m_y << ")" << std::endl;
}
