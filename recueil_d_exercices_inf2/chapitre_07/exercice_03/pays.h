#ifndef EXERCICE_03_PAYS_H
#define EXERCICE_03_PAYS_H

#include <string>

using namespace std;

class Pays {
public:
    Pays(string nom, double habitant, unsigned superficie);

    const string &getNom() const;
    double getHabitant() const;
    unsigned getSuperficie() const;

    double densitePop() const;

private:
    string m_nom;
    double m_nbr_habitant; // en mio d'hab
    unsigned m_superficie;
};


#endif //EXERCICE_03_PAYS_H
