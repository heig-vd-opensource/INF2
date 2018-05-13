
#include "c.h"

C::C(int i) : m_data(i) {
}

ostream &operator<<(ostream &lhs, const C &rhs) {
    return lhs << "n = " << rhs.m_data;
}

C operator+(C lhs, const C& rhs) {
    lhs += rhs;
    return lhs;
}

bool operator==(const C &lhs, const C &rhs) {
    return lhs.m_data == rhs.m_data;
}

bool operator!=(const C &lhs, const C &rhs) {
    return !(lhs == rhs);
}

C &C::operator+=(const C &rhs) {
    m_data = m_data + rhs.m_data;
    return *this;
}

C &C::operator++() {
    m_data++;
    return *this;
}

C C::operator++(int) {
    C temp = *this;
    m_data++;
    return temp;
}
