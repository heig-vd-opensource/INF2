# Exercice 10
## Messages

Implémenter une classe Message permettant de modéliser un message (email). Un
message se caractérise par un expéditeur, un destinataire, une date-heure de
création ainsi qu'un contenu (le texte du message).  

__La classe doit mettre à disposition :__ 
* un constructeur qui prend en paramètres l'expéditeur et le destinataire et qui
fixe automatiquement la date-heure courante (qui ne doit pas être modifiée)
* une fonction membre qui permet d'ajouter une ligne de texte au contenu du
message
* une fonction membre toString qui convertit l'objet message en une unique
chaîne de caractères comme suit "From : xxx\nTo : yyy\nDate : zzz\n…"
* une fonction membre qui permet d'afficher à l'écran le message.


---

A l'aide de la classe Message écrire un programme C++ qui crée ("en dur") un 
message et affiche ce dernier à l'écran.

__Exemple d'exécution__

```
From : Pierre Burki
To : Alfred Strohmeier
Date : 17.02.2016 20:01

Cher ami,
RDV demain a 9h.
Meilleures salutations.

Pierre
```