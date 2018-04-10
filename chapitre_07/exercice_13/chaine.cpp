#include "chaine.h"



void Chaine::copie(const Chaine& ch) {
    for (register size_t i = 0; i < lg; ++i)
        adr[i] = ch.adr[i]; //ou this->[i] = ch.adr[i]
}

Chaine::Chaine() {
    initialise();
}

Chaine::Chaine(const char* adc) {
    initialise();
    if (adc) {
        char* ad = (char*) adc;
        while (*ad++) lg++; //calcule longeur chaine C
        adr = new char[lg]; //leve bad alloc si alloc memoire impossible
        for (register size_t i = 0; i < lg; ++i) //recopie chaine C
            adr[i] = adc [i];
    }
}

Chaine::Chaine(const Chaine& ch) {
    if (ch.lg != 0) {
        adr = new char[lg = ch.lg];
        copie(ch);
    }
}

std::ostream& operator<<(std::ostream&os, const Chaine& ch) {
    for (size_t i = 0; i < ch.lg; ++i) {
        os << ch.adr[i];
    }
    return os;
}

Chaine& Chaine::operator=(const Chaine& ch) {
    if (this != &ch) {
        if (lg != ch.lg) {
            delete[] adr;
            adr = new char [lg = ch.lg];
        }
        copie(ch);
    }
    return *this;
}
