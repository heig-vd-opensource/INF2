

#include <cstdlib>
#include<iostream>
#include "personne.h"
#include "adress.h"

using namespace std;

int main() {
    Adress a1 = {"Chemin des Lilas", "7A", 1400, "Yverdon-les-Bains"},
    a2 = {"Avenue des sports", "18", 1000, "Lausanne"},
    a3 = {"Rue des Acacias", "21", 1800, "Vevey"};

    Personne p1("Ecoffey", "Paul", a1,{Hobby::MUSIQUE}),
     p2("Grandjean", "Alexandre", a2,{},{&p1}),
     p3("Ducotterd", "Julie", a3,{Hobby::SPORT, Hobby::CINEMA}),p4();

    p1.ajouterHobbie({Hobby::CINEMA, Hobby::LECTURE});

    p1.ajouterAmi({&p3}); // automatique  p2.ajouterAmi(p1);
    p3.ajouterHobbie({Hobby::CINEMA,Hobby::LECTURE});//***
    p3.ajouterAmi({&p1,&p2});//****
    cout << p1 << endl << endl;
    cout << p2 << endl << endl;
    cout << p3 << endl << endl;
    cout << p4 << endl<< endl;

    return EXIT_SUCCESS;
}
