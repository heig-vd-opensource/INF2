
#include <cstdlib>
#include <iostream>

using namespace std;

template <typename T> class C {
public:
    C(T t) : t(t) {};
    void afficher() const;
private:
    T t;
};

template <typename T>
void C<T>::afficher() const {
    cout << t;
}

template <>
void C<int*>::afficher() const {
    cout << *t;
}

int main() {
    int n = 1;
 
    C<int> c1(n);
    c1.afficher();
    cout << endl;

    C<int*> c2(&n);
    c2.afficher();
    cout << endl;

    C<const char*> c3("Hello");
    c3.afficher();
    cout << endl;

    return EXIT_SUCCESS;
}

