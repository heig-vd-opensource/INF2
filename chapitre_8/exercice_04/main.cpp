
#include <cstdlib>
#include <iostream>


#include "question1.h"
#include "question2.h"
#include "question3.h"
#include "question4.h"

int main() {

    char c = 'A';
    short s = 1;
    int i = 2, j = 3;
    float x = 4.f;

    std::cout << "Partie 1" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "a) f(i, j, c); -> ";
    question1::f(i, j, c);
    std::cout << "b) f(i, j, s); -> ";
    question1::f(i, j, s);
    std::cout << "c) f(i, j, x); -> ";
    question1::f(i, j, x);
    std::cout << "***********************************************" << std::endl;


    std::cout << "Partie 2" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "a) f(i, j, c); -> ";
    question2::f(i, j, c);
    std::cout << "b) f(i, j, s); -> ";
    question2::f(i, j, s);
    std::cout << "c) f(i, j, x); -> ";
    question2::f(i, j, x);
    std::cout << "***********************************************" << std::endl;


    std::cout << "Partie 3" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "a) f(i, j, c); -> ";
    question3::f(i, j, c);
    std::cout << "b) f(i, j, s); -> ";
    question3::f(i, j, s);
    std::cout << "c) f(i, j, x); -> ";
//    question3::f(i, j, x);
    std::cout << "error: call of overloaded ‘f(int&, int&, float&)’ is "
                 "ambiguous" << std::endl;
    std::cout << "***********************************************" << std::endl;


    std::cout << "Partie 4" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << "a) f(i, j, c); -> ";
    question4::f(i, j, c);
    std::cout << "b) f(i, j, s); -> ";
    question4::f(i, j, s);
    std::cout << "c) f(i, j, x); -> ";
//    question4::f(i, j, x);
    std::cout << "error: call of overloaded ‘f(int&, int&, float&)’ is "
                 "ambiguous" << std::endl;
    std::cout << "***********************************************" << std::endl;

    return EXIT_SUCCESS;
}