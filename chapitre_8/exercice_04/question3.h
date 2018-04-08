#ifndef EXERCICE_04_QUESTION3_H
#define EXERCICE_04_QUESTION3_H

#include <iostream>


namespace question3 {

    // fonction 1
    template <typename T, typename U> void f(T, U, int){
        std::cout << "fonction 1" << std::endl;
    }

    // fonction 2
    template <typename T> void f(T, T, short){
        std::cout << "fonction 2" << std::endl;
    }

    // fonction 3
    template <typename T> void f(T, int, int) {
        std::cout << "fonction 3" << std::endl;
    }

}


#endif //EXERCICE_04_QUESTION3_H
