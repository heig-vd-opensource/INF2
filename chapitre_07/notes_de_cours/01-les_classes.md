# Les classes


## Syntaxe

```cpp
class NomDeLaClasse {
    // friend
public:
    // constructeur
    // setter/getter
    // fonctions public
    // operateur membre de la classe
private:
    // membres (+const +static)
    // fonctions privée
};
```

__important__
* si une fontions ne modifie pas les donnée membres, mettre _const_ a la déclaration
et la définition

## acces aux autres membres
* par leur nom
* this->nom
* (this).nom

les membres privé ne sont pas accessible __en dehors de la classe__

* constructeur par défaut
* constructeur avec paramètre

* liste d'initialisations (-> obligatoire pour les constantes)

> peut etre surcharger


