#ifndef EXERCICE_08_OBJET_H
#define EXERCICE_08_OBJET_H

#include <cstdlib>
#include <iostream>

using namespace std;

class Objet {
    friend ostream& operator<<(ostream& os, const Objet& obj);
public:
    Objet();
    ~Objet();
    uint no() const;
    static uint prochainNo();
    static uint compteur();
private:
    uint _no;
    static uint _prochainNo;
    static uint _compteur;
};



#endif //EXERCICE_08_OBJET_H
