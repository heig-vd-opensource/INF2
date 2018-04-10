#include <cstdlib>
#include <algorithm>
#include "pays.h"

bool compareDensite(const Pays& p1, const Pays& p2){
    return p1.densitePop() < p2.densitePop();
}

int main(){

    // declaration de pays
    // creations d'un vecteur de pays (pays)
    // exemple plus grande densite (pour avoir le nom):
    // max_element(pays.begin(), pays.end(), compareDensite)->getNom

    return EXIT_SUCCESS;
}
