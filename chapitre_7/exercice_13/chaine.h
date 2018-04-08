#ifndef EXERCICE_13_CHAINE_H
#define EXERCICE_13_CHAINE_H

#include <iostream>

class Chaine {
    friend std::ostream& operator<<(std::ostream&, const Chaine&);
public:
    Chaine(); //constructeur 1
    Chaine(const char* adc); //constructeur 2
    Chaine(const Chaine& ch); //constructeur 3

    ~Chaine() { //destructeur(inline)
        delete[] adr;
    }
    Chaine& operator=(const Chaine& ch); //operator d'affectation

private:
    std::size_t lg; //longeur actuelle de la chaine
    char* adr; //adress de la zone contient la chaine

    void initialise() {//nessaire car impossible en c++ d'appeler depuis
        //constructeur un autre constructeur de la même
        lg = 0;
        adr = nullptr; //ou adr = NULL ou encore adr = 0
    }
    void copie(const Chaine& ch);
};

#endif //EXERCICE_13_CHAINE_H
