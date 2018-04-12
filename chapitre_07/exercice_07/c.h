#ifndef EXERCICE_07_C_H
#define EXERCICE_07_C_H

#include <iostream>

using namespace std;

class C {
friend ostream& operator<<(ostream& lhs, const C& rhs);
friend C operator+(C lhs, const C& rhs);
friend bool operator==(const C& lhs, const C& rhs) const;
friend bool operator!=(const C& lhs, const C& rhs) const;

public:
    C(int i=0);
    C& operator+=(const C& rhs);
    C& operator++(); // pré-incrementation
    C operator++(int); // post-incrementation

private:
    int m_data;
};


#endif //EXERCICE_07_C_H
