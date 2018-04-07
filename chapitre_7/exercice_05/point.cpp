
#include "point.h"

Point::Point(float x, float y) : m_x(x), m_y(y){

}

Point Point::operator+(const Point& point) const {
    Point temp(0,0);
    temp.m_x = m_x + point.m_x;
    temp.m_y = m_y + point.m_y;
    return temp;
}

void Point::deplacer(float dx, float dy) {
    m_x += dx;
    m_y += dy;
}

float Point::abscisse() const{
    return m_x;
}

float Point::ordonnee() const{
    return m_y;
}

