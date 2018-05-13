
#include <cmath>
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

void Point::rotation(float angle) {
    const float RHO = this->rho();
    const float THETA = this->theta();
    m_x = RHO * cos(THETA);
    m_y = RHO * sin(THETA);

}

float Point::rho() const {
    return sqrt(m_x * m_x + m_y * m_y);
}

float Point::theta() const {
    if(m_y >= 0.f){
        return atan2(m_y, m_x);
    } else {
        return atan2(m_y, m_x) + 2 * PI;
    }
}
