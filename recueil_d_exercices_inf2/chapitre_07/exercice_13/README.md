# Exercice 13
## Constructeur de (re)copie et opérateur d'affectation


En C, il n'existe pas de véritable type chaîne de caractères, mais simplement
 une convention de représentation des chaînes (suite de caractères terminée 
 par un caractère de code nul). Un certain nombre de fonctions (strcpy, 
 strcat…) utilisant cette convention permettent les manipulations classiques (copie, concaténation…):


Cet exercice vous demande de définir une classe nommée __Chaine__ offrant des 
possibilités plus proches d'un véritable type chaîne

______

Pour ce faire, on prévoira :
* comme données membre :
    * la longueur courante de la chaîne
    * l'adresse d'une zone allouée dynamiquement, destinée à recevoir la 
    suite de caractères (__NB__ pas nécessaire d'y ranger le caractère nul de 
    fin, puisque la longueur de la chaîne est définie par ailleurs)
    
    Le contenu d'un objet de type Chaine pourra donc évoluer par un simple 
    jeu de gestion dynamique.

* comme constructeurs_
    * _Chaine()_ : initialise une chaine vide
    * _Chaine(const char*)_ : initialise la chaîne avec la chaîne (au sens C) 
    dont on fournit l'adresse en argument
    * constructeur de (re)copie
    
* comme __opérateurs__ (on pourrait bien sûr en ajouter beaucoup d'autres !) :
    * _<<_ : pour l'affichage à l'écran d'une chaîne
    * _=_ : pour l'affectation entre objets de type Chaine (penser à 
    l'affectation multiple)
    
-------
NB On trouve dans la bibliothèque standard C++ une classe string offrant, 
entre autres, les fonctionnalités évoquées ici. Pour conserver son intérêt à 
l'exercice, il ne faut bien sûr pas l'utiliser ici.