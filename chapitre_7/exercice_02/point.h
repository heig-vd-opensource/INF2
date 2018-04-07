#ifndef EXERCICE_02_POINT_H
#define EXERCICE_02_POINT_H


class Point {
public:
    Point(float x, float y);
    void deplacer(float dx, float dy);

    float abscisse() const; // x
    float ordonnee() const; // y


private:
    float m_x;
    float m_y;
};


#endif //EXERCICE_02_POINT_H
