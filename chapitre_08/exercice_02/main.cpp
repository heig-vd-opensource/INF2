#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

template <typename T>
size_t nbOcc(const T tab[], size_t nbElements, const T& comparateur){
    size_t nb = 0;
    for(size_t i = 0; i < nbElements; ++i){
        if(tab[i] == comparateur){
            ++nb;
        }
    }

    return nb;
}

template <typename T>
size_t nbOcc(const T tab[], size_t nbElements, UnaryPredicate predicat){
    size_t nb = 0;
    for(size_t i = 0; i < nbElements; ++i){
        if(predicat){
            ++nb;
        }
    }
    
    return nb;
}

class Temps{
public:
    Temps(int heure, int minutes) : heure(heure), minutes(minutes){}
    friend bool operator == (const Temps& t1, const Temps& t2);
private:
    int heure;
    int minutes;
};

bool operator == (const Temps& t1, const Temps& t2){
    return (t1.heure == t2.heure && t1.minutes == t2.minutes);
}

int main() {
    const int T1[] = {0,1,0};
    const size_t T1_TAILLE = sizeof(T1) / sizeof(int);
    
    const Temps T2[] = {
        {7,45},
        {9,20},
        {12,00},
        {21,30}
    };
    const size_t T2_TAILLE = sizeof(T2) / sizeof(Temps);
    string T3[] = {"Paul", "Jacques", "Paul", "Jean", "Paul"};
    
    const size_t T3_TAILLE = sizeof(T3) / sizeof(string);
    const char* const T4[] = {"Paul", "Jacques", "Paul", "Jean", "Paul"};
    const size_t T4_TAILLE = sizeof(T4) / sizeof(const char*);
    auto predicat = bind2nd(equal_to<const char*>(), "Paul");
    
    cout << "T1 : " << nbOcc(T1,T1_TAILLE,0) << endl;
    cout << "T2 : " << nbOcc(T2, T2_TAILLE, Temps(12,00)) << endl;
    cout << "T3 : " << nbOcc<string>(T3, T3_TAILLE, "Paul") << endl;
    cout << "T4 : " << nbOcc<>(T4, T4_TAILLE, predicat) << endl;
    
    return 0;
}
