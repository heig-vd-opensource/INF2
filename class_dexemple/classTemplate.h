# ifndef _CLASS_H_
# define _CLASS_H_

// includes
#include <strings>
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
    friend instream& operator>>(instream& in, Objet& objet);

public:
    /*
     * Constructeurs
     */
    Objet();  // par défaut
    Objet(unsigned int days, unsigned int month=0, string name="test");

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
    // operateurs calcul
    Objet operator * (const Objet& objet, double lhs);

    // modifie l'objet
    Objet& operator+=(const Objet& rhs);
    Objet& operator++();  // pré-incrementation
    Objet operator++(int);  // post-incrementation

    // operateurs relationnels
    bool operator < (const Objet& lhs, const Objet& rhs) const;
    bool operator > (const Objet& lhs, const Objet& rhs) const;
    bool operator == (const Objet& lhs, const Objet& rhs) const;
    bool operator != (const Objet& lhs, const Objet& rhs) const;


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
}

# endif /* _CLASS_H_ */
