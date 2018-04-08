#include "adress.h"

using namespace std;

//constructeur
Adress::Adress(const string& nomRue, const string& nmRue, unsigned postal, const string& localite)
        : nomRue(nomRue), nmRue(nmRue), postal(postal), localite(localite) {
}
//modificateur
void Adress::setNomRue(const string& nomRue) {
    this->nomRue = nomRue;
}

void Adress::setNmRue(const string& nmRue) {
    this->nmRue = nmRue;
}

void Adress::setPostal(unsigned postal) {
    this->postal = postal;
}

void Adress::setLocalite(const string localite) {
    this->localite = localite;
}
//selecteur
string Adress::toString() const {
    if (nomRue.size() == 0) {
        return "";
    } else {
        string str = nomRue + ' ' + nmRue + '\n'
                     + to_string(postal) + ' ' + localite;
        return str;
    }
}

string Adress::getNomRue()const {
    return nomRue;
}

string Adress::getLocalite()const {
    return localite;
}

string Adress::getNmRue()const {
    return nmRue;
}

unsigned Adress::getPostal()const {
    return postal;
}