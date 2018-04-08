# Exercice 5
## Instanciations d'une classe générique

Soient les deux classes génériques (ou patrons de classes) suivantes :

```cpp
template <typename T = int> class A {…};
template <typename T, typename U, int n> class B {…};
```

Pour chacune des instanciations ci-dessous, dire si celle-ci est correcte ou non.

1) `B<int, double, 1> b;`
2) `const int N = 1; B<int, int, N> b;`
3) `int n = 1; B<int, double, n> b;`
4) `B<int, double, 'A'> b;`
5) `B<int, double, 'A' + 'B'> b;`
6) `B<int, double, 1.0> b;`
7) `B<int, int*, 1> b;`
8) `B<A<>, double, 1> b;`
9) `B<double, A, 1> b;`
10) `B<A<double>, double, true> b;`