#include "classTemplate.h"

/**
 * constructeur par défaut
 */
Objet::Objet() : m_name(name){
    m_days = 0;
    m_month = 0;
}

/**
 * constructeur avec parametre
 */
Objet::Objet(int days, unsigned int month, string name) : m_name(name){
    this->m_days = days;
    m_month = month;
}



