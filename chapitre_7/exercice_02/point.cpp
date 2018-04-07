#include "point.h"

Point::Point(float x, float y) : m_x(x), m_y(y){

}

void Point::deplacer(float dx, float dy) {
    m_x += dx;
    m_y += dy;
}

float Point::abscisse() const {
    return m_x;
}

float Point::ordonnee() const {
    return m_y;
}
