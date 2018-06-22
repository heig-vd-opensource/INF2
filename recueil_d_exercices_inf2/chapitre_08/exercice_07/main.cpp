
#include <cstdlib>
#include <iostream>

using namespace std;

template <typename T, size_t n> class Array {
public:
    Array(const T& valeur);
    
    void afficher()const ;
    
    template<typename X, size_t y>
    friend void abcd <>(const Array<X, y>& array);

    template<typename Q, size_t r>
    friend ostream &operator << <>(ostream& os, const Array<Q, r>& array);
private:
    T tab[n];
};

template <typename T, size_t n>
ostream &operator << <>(ostream &os, const Array<T, n> &array){
    for(size_t i=0; i < n; ++i){
        os << array.tab[i];
    }
    return os;
}

template <typename T, size_t n>
void abcd(const Array<T, n> &array){
    cout << "ici" << endl;
}

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
    cout << a1;
    cout << endl;

    Array<double, 4> a2(1.5);
    cout << a2;
    cout << endl;

    return EXIT_SUCCESS;
}
