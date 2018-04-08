
#include <cstdlib>
#include <iostream>

using namespace std;


template <typename T, size_t n> class Array {
public:
q     template <typename T, size_t n>
    friend ostream &operator<<(ostream &os, const Array<T, n> &array);
public:
    Array(const T& valeur);
private:
    T tab[n];
};

template <typename T, size_t n>
ostream &operator<<(ostream &os, const Array<T, n> &array) {
    os << "tab: " << array.tab;
    return os;
}

template<typename T, size_t n>
Array<T, n>::Array(const T &valeur) {
    for (size_t i = 0; i < n; ++i) {
        tab[i] = valeur;
    }
}

int main() {
    Array<int, 3> a1(1);
    cout << a1 << endl;

    Array<double, 4> a2(1.5);
    cout << a2 << endl;

    return EXIT_SUCCESS;
}
