# cours 1

__contenu de cette partie de cours:__ 
* historique
* usage de pre-processeurs
* types de base en C
* les operateurs en C
* entree sortie

__motivations__

* language toujours utilisé
* noyaux os en C
* drivers
* sous-systems critics
* compilateurs

> plus generalement, quand on veux des très bonne performances et plus de control sur la machine

__comparaison c/c++__
voir slide 12 !

__caracteristique c__

__points faible du C__
gestion d'erreurs, lisibilité

__Resoudre les point faible__
utiliser librairies  
code style  
testing  

## pré-processeurs en C
modifie les sources  

__erreurs__
peuvent  etre dur a detecter

__syntaxe__
commence par '#'
fini a la din de ligne

__actions possible__
* inclure fichier externe
* definir constante
* definir macro
* compilation conditionnelle

### includes
insere contenu de fichier  
delimiteurs  
librairies c avec .h / c++ sans extension

### define

### macro
par exemple pour min(a,b)  
`#define min(a,b) ((a)<(b) ? (a) : (b))`

__! Effets de bords__

'#' dans les macros -> donne le nom de la variable

'##' dans les macros -> pour faire par exemple des noms de fonctions dynamique
> this is glorius 

__Généricité avec ##__

```c
#define GENERIC_MIN(type) \
type type##_min(type x, type y) \
{ \
return x < y ? x : y; \
}
```



