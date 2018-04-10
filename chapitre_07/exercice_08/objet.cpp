#include "objet.h"

uint Objet::_prochainNo = 1;
uint Objet::_compteur = 0;

ostream& operator<<(ostream& os, const Objet& obj) {
    return os << "Objet no " << obj._no;
}

Objet::Objet() {
    cout << "Appel du constructeur\n";
    _no = _prochainNo++;
    _compteur++;
}

Objet::~Objet() {
    cout << "Appel du destructeur\n";
    _compteur--;
}

uint Objet::no() const {
    return _no;
}

uint Objet::prochainNo() {
    return _prochainNo;
}

uint Objet::compteur() {
    return _compteur;
}

