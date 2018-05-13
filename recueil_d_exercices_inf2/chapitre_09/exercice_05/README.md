# Exercice 5
## Construction d'un objet membre (1)

Sans utiliser le concept de function-try block, compléter les deux constructeurs 
des classes Identite et Personne de telle sorte que, à l'exécution, 
le programme ci-dessous affiche :

```
Debut du test 1.
Tentative de construction d'un objet du type Personne.
Parametres fournis: "John Fitzgerald", "Kennedy"
Dans Identite::Identite(): John Fitzgerald Kennedy.
Dans Personne::Personne(): John Fitzgerald Kennedy.
Fin du test 1.

Debut du test 2.
Tentative de construction d'un objet du type Personne.
Parametres fournis: "", "Marley"
Exception survenue dans Identite::Identite():
prenom ne peut pas etre une chaine vide.
Exception survenue dans Personne::Personne().
Exception survenue dans main().
```

__Important__

Hormis les deux constructeurs à compléter, aucune ligne de code ne doit être 
ajoutée, modifiée ou supprimée du programme proposé ci-dessous
```cpp
#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class Identite {
public:
    Identite() = default;

    Identite(const string& prenom, const string& nom)
    <à compléter 1>

    string toString() const {
        return prenom + " " + nom;
    }

private:
    string prenom;
    string nom;
};

class Personne {
public:
    Personne(const string& prenom, const string& nom)
    <à compléter 2>

private:
    Identite identite;
};

int main() {

    try {
        {
            cout << "Debut du test 1." << endl
                 << "Tentative de construction d'un objet du type Personne." << endl
                 << "Parametres fournis: \"John Fitzgerald\", \"Kennedy\"" << endl;
            Personne personne1("John Fitzgerald", "Kennedy");
            cout << "Fin du test 1." << endl;
        }
        {
            cout << endl << "Debut du test 2." << endl
                 << "Tentative de construction d'un objet du type Personne." << endl
                 << "Parametres fournis: \"\", \"Marley\"" << endl;
            Personne personne2("", "Marley");
            cout << "Fin du test 2." << endl;
        }
    } catch (const invalid_argument&) {
        cout << "Exception survenue dans main()." << endl;
    }

    return EXIT_SUCCESS;
}
```


