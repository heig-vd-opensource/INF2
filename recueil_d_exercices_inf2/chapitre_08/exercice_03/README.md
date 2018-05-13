# Exercice 3
## Surcharge et spécialisation (1)

Soient les définitions de fonctions suivantes :

```cpp
template <typename T, typename U> void f(T, U) {...}    // fonction I
template <typename T, typename U> void f(T*, U) {...}   // fonction II
template <typename T> void f(T, T) {...}                // fonction III
template <typename T> void f(T, int) {...}              // fonction IV

void f(int, int) {...}      // fonction V
void f(int*, float) {...}   // fonction VI
```

et soient les déclarations de variables suivantes :

```cpp
char c = 'A';
int i = 1, j = 2;
float x = 3.f, y = 4.f;
double z = 5.0;
```

Pour chacun des appels ci-dessous, dire si celui-ci est correct ou non et s'il
l'est, indiquer quelle fonction est appelée.

1) f(i, j);
2) f(c, i);
3) f(x, y);
4) f(i, z);
5) f(&i, j);
6) f(&i, x);
7) f(&i, z);