#ifndef EXERCICE_04_QUESTION2_H
#define EXERCICE_04_QUESTION2_H


#include <iostream>


namespace question2 {

    // fonction 2
    template <typename T> void f(T, T, short){
        std::cout << "fonction 2" << std::endl;
    }

    // fonction 3
    template <typename T> void f(T, int, int) {
        std::cout << "fonction 3" << std::endl;
    }

    // fonction 4
    void f(int, int, int) {
        std::cout << "fonction 4" << std::endl;
    }
}

#endif //EXERCICE_04_QUESTION2_H
