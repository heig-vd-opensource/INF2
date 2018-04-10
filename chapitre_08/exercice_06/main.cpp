
#include <cstdlib>
#include <iostream>

using namespace std;

template <typename T, size_t n> class Array {
public:
    Array(const T& valeur);
    void afficher()const ;
private:
    T tab[n];
};

template<typename T, size_t n>
Array<T, n>::Array(const T &valeur) {
    for (size_t i = 0; i < n; ++i) {
        tab[i] = valeur;
    }
}

template<typename T, size_t n>
void Array<T, n>::afficher() const {
    cout << "[";
    for(size_t i=0; i<n; ++i) {
        if(i > 0){
            cout << ", ";
        }
        cout << tab[i];
    }
    cout << "]";
}


int main() {
    Array<int, 3> a1(1);
    a1.afficher();
    cout << endl;

    Array<double, 4> a2(1.5);
    a2.afficher();
    cout << endl;

    return EXIT_SUCCESS;
}
