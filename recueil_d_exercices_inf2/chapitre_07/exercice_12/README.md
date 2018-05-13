# Exercice 12
## Personnes

Implémenter une classe Personne sachant que :

* une personne a un nom, un prénom et une adresse
* une adresse se caractérise par un nom de rue, un numéro de rue, un code 
postal et une localité
* une personne a 0, 1 ou plusieurs hobbies
* une personne a 0, 1 ou plusieurs amis

__Contraintes:__
* Address
    * Implémenter le concept d'adresse au moyen d'une classe dédiée _Adresse_
* Hobbies
    * Implémenter les hobbies au moyen d'un type énuméré fortement typé.
    * Les hobbies possibles sont : sport, musique, cinéma, lecture
    * Il doit être possible, en tout temps, d'ajouter un (ou plusieurs) 
    nouvel hobby à quelqu'un.
    * La suppression d'un hobby n'est pas à implémenter
* Amis
    * Un ami est une personne
    * Il doit être possible, en tout temps, d'ajouter un (ou plusieurs) 
    nouvel ami à quelqu'un.
    * L'amitié est réciproque (si on ajoute un ami A à B, alors B doit se 
    voir automatiquement ajouté comme ami de A)
    * La suppression d'un ami n'est pas à implémenter
* Général
    * N'implémenter que les membres (données et fonctions) strictement 
    nécessaires