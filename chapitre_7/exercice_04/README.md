# Exercice 4
## Robot

1. Implémenter une classe Robot permettant de modéliser un robot se déplaçant le
long d'un axe horizontal gradué. Le robot se déplace soit vers la droite, soit 
vers la gauche. Initialement le robot se déplace vers la droite, mais il peut, 
en tout temps, faire demi-tour pour ensuite se déplacer dans la direction 
opposée.

La classe doit mettre à disposition:

* un constructeur permettant de définir la position initiale (de type int) du 
robot.  
__Important__ Si l'utilisateur ne fournit pas de valeur pour la position 
initiale du robot, on considérera que cette dernière vaut 0.

* une fonction membre deplacer permettant au robot de se déplacer de n unités
dans la direction courante  
__Important__ Si l'utilisateur ne fournit pas de valeur pour n, le robot se
déplacera par défaut d'une unité.

* une fonction membre FaireDemiTour permettant au robot de faire demi-tour



Ecrire un petit programme de test (main) permettant de vérifier le bon
fonctionnement de la classe Robot.