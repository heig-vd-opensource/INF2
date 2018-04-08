# Exercice 1
## Instanciations d'une fonction générique

Soit la définition de fonction générique suivante :

```cpp
template <typename T, typename U> T f(T x, U y, T z) {
    return x + y + z;
}
```

et soient les déclarations de variables suivantes:

```cpp
int i = 1, j = 2, k = 3;
double x = 4.5, y = 5.5

```

-----
Pour chacune des instanciations ci-dessous, dire si celle-ci est correcte ou 
non et si elle l'est, indiquer quel est le type et la valeur du résultat livré
en retour.

1. `f(i, x, j)`
2. `f<>(x, i, y)`
3. `f(i, j, k)`
4. `f(i, j, x)`
5. `f((double)i, j, x)`
6. `f<int, double>(i, j, x)`
7. `f<int>(i, x, x)`
8. `f<double>(i, x, x)`


------

> 4 ne compile pas