#ifndef EXERCICE_12_PERSONNE_H
#define EXERCICE_12_PERSONNE_H

#include <vector>
#include <iostream>
#include <string>
#include "adress.h"

enum class Hobby {
    SPORT = 1, MUSIQUE = 2, CINEMA = 3, LECTURE = 4
};


class Personne {
    friend std::ostream& operator<<(std::ostream& os, const Personne& personne);
public:
    //constructeur
    Personne(const std::string& nom, const std::string& prenom,
             const Adress& ad, const std::initializer_list<Hobby>& hb, const std::initializer_list<Personne*>& amis);
    Personne(const std::string& nom, const std::string& prenom,
             const Adress& ad, const std::initializer_list<Hobby>& hb);
    //setteur
    void setAdress(const std::string& nomRue, const std::string& nmRue, unsigned postal, const std::string& localite);
    void ajouterHobbie(const std::initializer_list<Hobby>& hb);
    void ajouterAmi(const std::initializer_list<Personne*>& amis);
    std::string getNom() const;
    std::string getPrenom()const;
    std::string getAdress()const;
    std::string getHobbies()const;
    std::string getAmis()const;

private:
    std::string nom, prenom;
    Adress adress;
    std::vector<Hobby> hobbie;
    std::vector<Personne*> ami;
};




#endif //EXERCICE_12_PERSONNE_H
