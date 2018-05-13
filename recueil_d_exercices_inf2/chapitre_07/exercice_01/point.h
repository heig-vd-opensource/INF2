#ifndef EXERCICE_01_POINT_H
#define EXERCICE_01_POINT_H


class Point {
public:
    Point(float x, float y);
    void deplacer(float dx, float dy);
    void afficher() const;

private:
    float m_x;
    float m_y;

};


#endif //EXERCICE_01_POINT_H
