#ifndef EXERCICE_06_POINT_H
#define EXERCICE_06_POINT_H

const float PI = 3.14159f;

class Point {
public:
    Point(float x=0.f, float y=0.f);
    void deplacer(float dx, float dy);
    void rotation(float angle); // en radian
    float abscisse() const; // x
    float ordonnee() const; // y
    float rho() const;
    float theta() const;


private:
    float m_x;
    float m_y;
};

#endif //EXERCICE_06_POINT_H
