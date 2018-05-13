# Exercice 11
## Mailbox

Implémenter une classe Mailbox permettant de modéliser une boîte aux
lettres (mailbox) contenant divers message (emails) tels que définis
dans l'exercice 7.10.  

__La Classe doit mettre à disposition:__
* une fonction membre permettant d'ajouter un message à la mailbox  
_Important:_ La fonction membre ajoute le message à la mailbox si
et seulement si ledit message ne s'y trouve pas déjà (doublon). Dans le cas contraire,
elle ne fait rien.
* une fonction membre permettant de récupérer le ième message stocké dans la mailbox  
_Important:_ Si le ième message n'existe pas, la fonction se contente de propager
l'exception prédéfine out_of_range.
* une fonction membre permettant de supprimer le ième message stocké dans la mailbox  
_Important:_ La fonction membre ne fait rien si la suppression n'a pas de sens
(par ex si la mailbox est vide).
* une fonction membre retournant combien de messages sont stockés dans la mailbox


___
Ecrire un petit programme de test (main) permettant de vérifier le bon fonctionnement
de la classe Mailbox
