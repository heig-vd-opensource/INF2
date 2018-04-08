#include <cstdlib>
#include <iostream>

using namespace std;

// fonction I
template <typename T, typename U> void f(T, U) {
    cout << "fonction 1" << endl;
}

// fonction II
template <typename T, typename U> void f(T*, U) {
    cout << "fonction 2" << endl;
};

// fonction III
template <typename T> void f(T, T) {
    cout << "fonction 3" << endl;
}

// fonction IV
template <typename T> void f(T, int) {
    cout << "fonction 4" << endl;
}

// fonction V
void f(int, int) {
    cout << "fonction 5" << endl;
}

// fonction VI
void f(int*, float) {
    cout << "fonction 6" << endl;
}


int main(){

    char c = 'A';
    int i = 1, j = 2;
    float x = 3.f, y = 4.f;
    double z = 5.0;

    cout << "1) f(i, j) : ";
    f(i, j);
    cout << "------------------------------" << endl;

    cout << "2) f(c, i) : ";
    f(c, i);
    cout << "------------------------------" << endl;

    cout << "3) f(x, y) : ";
    f(x, y);
    cout << "------------------------------" << endl;

    cout << "4) f(i, z) : ";
    f(i, z);
    cout << "------------------------------" << endl;

    cout << "5) f(&i, j) : ";
//    f(&i, j);
    cout << "error: call of overloaded ‘f(int*, int&)’ is ambiguous" << endl;
    cout << "------------------------------" << endl;

    cout << "6) f(&i, x) : ";
    f(&i, x);
    cout << "------------------------------" << endl;

    cout << "6) f(&i, z) : ";
    f(&i, z);
    cout << "------------------------------" << endl;

    return EXIT_SUCCESS;
}