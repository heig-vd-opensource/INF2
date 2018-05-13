
#include <cstdlib>
#include <iostream>
#include "objet.h"

using namespace std;

int main() {
    cout << Objet::compteur() << endl;
    cout << Objet::prochainNo() << endl;
    const Objet OBJ;
    cout << OBJ << endl;
    cout << Objet::compteur() << endl;
    for (int i = 1; i <= 3; ++i) {
        Objet obj;
        cout << obj << endl;
        cout << Objet::compteur() << endl;
    }
    return EXIT_SUCCESS;
}