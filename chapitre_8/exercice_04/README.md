# Exercice 4
## Surcharge et spécialisation (2)

Soient les définitions de fonctions suivantes:

```cpp
template <typename T, typename U> void f(T, U, int); // fonction 1
template <typename T> void f(T, T, short); // fonction 2
template <typename T> void f(T, int, int); // fonction 3
void f(int, int, int); // fonction 4
```

et soient les déclarations de variables suivantes :

```cpp
char c = 'A';
short s = 1;
int i = 2, j = 3;
float x = 4.f;
``` 


a) `f(i, j, c)`;  
b) `f(i, j, s)`;  
c) `f(i, j, x)`;  

--------

1) Pour chacun des appels ci-dessus, dire si celui-ci est correct ou non et 
s'il l'est, indiquer quelle fonction est appelée
2) Même question que la question 1) mais on suppose ne disposer que des 
fonctions 2, 3 et 4
3) Même question que la question 1) mais on suppose ne disposer que des 
fonctions 1, 2 et 3
4) Même question que la question 1) mais on suppose ne disposer que des 
fonctions 1 et 2