#ifndef EXERCICE_04_QUESTION4_H
#define EXERCICE_04_QUESTION4_H


#include <iostream>


namespace question4 {

    // fonction 1
    template <typename T, typename U> void f(T, U, int){
        std::cout << "fonction 1" << std::endl;
    }

    // fonction 2
    template <typename T> void f(T, T, short){
        std::cout << "fonction 2" << std::endl;
    }
}


#endif //EXERCICE_04_QUESTION4_H
