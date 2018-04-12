# ifndef _CLASS_H_
# define _CLASS_H_

// includes
#include <string>
#include <iostream>
#include <iomanip>
#include <vector>


using namespace std;

class Objet {
    /*
     * friends: acces aux membres privé par une fonction non-membre
     */
    // operateurs de flux
    friend ostream& operator<<(ostream& os, const Objet& objet);
    friend instream& operator>>(const instream& in, Objet& objet);

public:
    /*
     * Constructeurs
     */
    Objet();  // par défaut
    Objet(unsigned int days, unsigned int month=0, string name="test");
    Objet(const Objet&); // constructeur par copie

    /*
     * Destructeurs
     * par exemple decrement le nombre d'instance en static
     */
    ~Objet();

    /*
     * fonctions publics
     * setter/getter
     */
    string getName() const;
    void setMonth(unsigned month);
    
    /*
     * surcharge d'operateurs membres
     */
    // ahrithmetic (+, -, *, /, %)
    Objet operator * (double lhs);

    // compounds (+=, -=, *=, /=, %=, ...)
    Objet& operator+=(const Objet& rhs);
    // incr, decrement
    Objet& operator++(){
        this = this + 1;
        return *this;
    }  // pré-incrementation
    Objet operator++(int);  // post-incrementation
    Objet& operator++();
    Objet operator++(int);

    // operateurs relationnels, comparaison
    bool operator < (const Objet& lhs, const Objet& rhs) const;
    bool operator > (const Objet& lhs, const Objet& rhs) const;
    bool operator <= (const Objet& lhs, const Objet& rhs) const;
    bool operator >= (const Objet& lhs, const Objet& rhs) const;
    bool operator == (const Objet& lhs, const Objet& rhs) const;
    bool operator != (const Objet& lhs, const Objet& rhs) const;

    /*
     * fonction statique
     */

private:
    /*
     * donnée membres
     */
    unsigned m_days;
    unsigned m_month;
    const string m_name;

    /**
     * Données statiques
     */
    static s_nbrInstance;
    static const CONSTANTE_STATIQUE;
}

# endif /* _CLASS_H_ */
