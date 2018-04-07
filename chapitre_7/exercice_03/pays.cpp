#include "pays.h"

Pays::Pays(string nom, double habitant, unsigned superficie)
        :m_nom(nom), m_nbr_habitant(habitant), m_superficie(superficie){
}

const string &Pays::getNom() const {
    return m_nom;
}

double Pays::getHabitant() const {
    return m_nbr_habitant;
}

unsigned Pays::getSuperficie() const {
    return m_superficie;
}

double Pays::densitePop() const {
    return m_nbr_habitant/m_superficie;
}
