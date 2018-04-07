

#include <iostream>
#include <cstdlib>
#include "point.h"

using namespace std;

int main(){
    Point p0 = Point(0,0);
    cout << "(" << p0.abscisse() << "," << p0.ordonnee() << ")" << endl;
    p0.deplacer(5, 7);
    cout << "(" << p0.abscisse() << "," << p0.ordonnee() << ")" << endl;

    return EXIT_SUCCESS;
}