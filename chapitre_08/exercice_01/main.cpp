
#include <cstdlib>
#include <iostream>
#include <typeinfo>

using namespace std;

template <typename T, typename U> T f(T x, U y, T z) {
    return x + y + z;
}

int main(){
    int i = 1, j = 2, k = 3;
    double x = 4.5, y = 5.5;

    cout << "1) f(i, x, j)" << endl;
    auto result1 = f(i, x, j);
    cout << "valeur: " << result1 << endl;
    cout << "Type: " << typeid(result1).name() << endl;
    cout << "----------------------------------------------------" << endl;

    cout << "2) f<>(x, i, y)" << endl;
    auto result2 = f<>(x, i, y);
    cout << "valeur: " << result2 << endl;
    cout << "Type: " << typeid(result2).name() << endl;
    cout << "----------------------------------------------------" << endl;

    cout << "3) f(i, j, k)" << endl;
    auto result3 = f(i, j, k);
    cout << "valeur: " << result3 << endl;
    cout << "Type: " << typeid(result3).name() << endl;
    cout << "----------------------------------------------------" << endl;

    /* ne compile pas
    cout << "4) f(i, j, x)" << endl;
    auto result4 = f(i, j, x);
    cout << "valeur: " << result4 << endl;
    cout << "Type: " << typeid(result4).name() << endl;
    cout << "----------------------------------------------------" << endl;
    */

    cout << "5) f((double)i, j, x)" << endl;
    auto result5 = f((double)i, j, x);
    cout << "valeur: " << result5 << endl;
    cout << "Type: " << typeid(result5).name() << endl;
    cout << "----------------------------------------------------" << endl;


    cout << "6) f<int, double>(i, j, x)" << endl;
    auto result6 = f<int, double>(i, j, x);
    cout << "valeur: " << result6 << endl;
    cout << "Type: " << typeid(result6).name() << endl;
    cout << "----------------------------------------------------" << endl;

    cout << "7) f<int>(i, x, x)" << endl;
    auto result7 = f<int>(i, x, x);
    cout << "valeur: " << result7 << endl;
    cout << "Type: " << typeid(result7).name() << endl;
    cout << "----------------------------------------------------" << endl;

    cout << "8) f<double>(i, x, x)" << endl;
    auto result8 = f<double>(i, x, x);
    cout << "valeur: " << result8 << endl;
    cout << "Type: " << typeid(result8).name() << endl;
    cout << "----------------------------------------------------" << endl;

    return EXIT_SUCCESS;
}