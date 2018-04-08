
#include "personne.h"

using namespace std;

Personne::Personne(const string& nom, const string& prenom, const Adress& ad,
                   const initializer_list<Hobby>& hb, const initializer_list<Personne*>& amis) {
    this->nom = nom;
    this->prenom = prenom;
    this->adress = ad;
    for (auto it = hb.begin(); it != hb.end(); ++it)
        this->hobbie.push_back(*it);
    for (auto it = amis.begin(); it != amis.end(); ++it){
        this->ami.push_back(*it);
        (**it).ami.push_back(this);
    }
}
//surchage de constructeur
Personne::Personne(const string& nom, const string& prenom, const Adress& ad,
                   const initializer_list<Hobby>& hb) {
    this->nom = nom;
    this->prenom = prenom;
    this->adress = ad;
    initializer_list<Hobby>::iterator it;
    for (it = hb.begin(); it != hb.end(); ++it)
        this->hobbie.push_back(*it);

}
//modificateur

void Personne::setAdress(const string& nomRue, const string& nmRue, unsigned postal, const string& localite) {
    this->adress = Adress(nomRue, nmRue, postal, localite);

}

void Personne::ajouterHobbie(const std::initializer_list<Hobby>& hb) {
    bool find = 0;
    for (auto it = hb.begin(); it != hb.end(); ++it) {
        find = 0;
        for (size_t i = 0; i<this->hobbie.size(); ++i) {
            if (*it == hobbie.at(i)) {
                find = 1;
                i = this->hobbie.size();
            }
        }
        if (!find)
            this->hobbie.push_back(*it);
    }
}

void Personne::ajouterAmi(const initializer_list<Personne*>& amis) {
    bool find = 0;
    for (auto it = amis.begin(); it != amis.end(); ++it) {
        find = 0;
        for (const Personne* ad : this->ami) {

            if (*it == ad) {
                find = 1;
                break;
            }
        }
        if (!find && *it != this) {
            this->ami.push_back(*it);
            (**it).ami.push_back(this);

        }
    }
}

//selecteur

string Personne::getNom() const {
    return nom;
}

string Personne::getPrenom() const {
    return prenom;
}

string Personne::getAdress() const {
    return adress.toString();
}

string Personne::getHobbies() const {
    string str = "[";
    for (const Hobby& h : hobbie) {
        switch ((int) h) {
            case 1:
                str += "sport";
                break;
            case 2:
                str += "musique";
                break;
            case 3:
                str += "cinema";
                break;
            case 4:
                str += "lecture";
                break;
            default:
                break;
        }
        if (h != hobbie.back())
            str += ", ";
    }
    str += ']';
    return str;
}

string Personne::getAmis()const {
    string str = "[";
    ;
    if (ami.size() == 0) {
        str += "Il n'y a aucun d'ami.\n";
    } else {
        for (const Personne* p : ami) {
            str += (*p).prenom + ' ' + (*p).nom;
            if (p != ami.back())
                str += ", ";
        }
    }

    str += ']';
    return str;
}
//autre
ostream& operator<<(ostream& os, const Personne& personne) {
    os << personne.prenom << ' ' << personne.nom<<endl
       << personne.getAdress()
       << "\nHobbies : " << personne.getHobbies()
       << "\nAmi(e)s : " << personne.getAmis();
    return os;
}