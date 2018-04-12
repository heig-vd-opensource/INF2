#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * patrons de classes:
 */
template <typename T = int> class A {

};

template <typename T, typename U, int n> class B {

};


int main(){
    // 1)
    B<int, double, 1> b1;

    // 2)
    const int N = 1;
    B<int, int, N> b2;

    // 3)
    int n = 1;
    //B<int, double, n> b3;
    // error: n pas constant

    // 4)
    B<int, double, 'A'> b4;

    // 5)
    B<int, double, 'A' + 'B'> b5;

    // 6) incorrect
    // error: conversion from ‘double’ to ‘int’ not considered for non-type template argument
    // error: could not convert template argument ‘1.0e+0’ to ‘int’
//    B<int, double, 1.0> b6;

    // 7)
    B<int, int*, 1> b7;

    // 8)
    B<A<>, double, 1> b8;

    // 9) incorrect
    // error: type/value mismatch at argument 2 in template parameter list
    // for ‘template<class T, class U, int n> class B’
//    B<double, A, 1> b9;

    // 10)
    B<A<double>, double, true> b10;


}
