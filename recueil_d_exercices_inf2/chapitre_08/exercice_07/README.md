# Exercice 7
## Classe générique Array (2)

Compléter les trois parties notées _< à compléter >_ du programme ci-dessous, 
de telle sorte que celui-ci affiche, à l'exécution :

```
[1, 1, 1]
[1.5, 1.5, 1.5, 1.5]
```

```cpp
< à compléter 1 >

template <typename T, size_t n> class Array {
    < à compléter 2 >
public:
    Array(const T& valeur);
private:
    T tab[n];
};

< à compléter 3 >

int main() {
    Array<int, 3> a1(1);
    cout << a1 << endl;
    
    Array<double, 4> a2(1.5);
    cout << a2 << endl;
    
    return EXIT_SUCCESS;
}
```
