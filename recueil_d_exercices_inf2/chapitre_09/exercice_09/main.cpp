#include <cstdlib>
#include <stdexcept>

using namespace std;

int sommeNPremiersEntiers(int n){
    if(n < 0){
        throw logic_error("n must be >= 0");
    }

    int count = n;
    for(int i=n-1; i != 0; --i){
        count += i;
        if(count < 0){
            throw overflow_error("overflow");
        }
    }

    return count;
}

int main(){

    return EXIT_SUCCESS;
}