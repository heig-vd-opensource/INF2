#ifndef EXERCICE_12_ADRESS_H
#define EXERCICE_12_ADRESS_H


#include <string>


class Adress {
public:
    Adress(const std::string& nomRue = "", const std::string& nmRue = "", unsigned postal = 0, const std::string& localite = "");
    void setNomRue(const std::string& nomRue);
    void setNmRue(const std::string& nmRue);
    void setPostal(unsigned postal);
    void setLocalite(const std::string localite);
    std::string toString() const;
    std::string getNomRue()const;
    std::string getLocalite()const;
    std::string getNmRue()const;
    unsigned getPostal()const;
private:
    std::string nomRue;
    std::string nmRue;
    unsigned postal;
    std::string localite;
};

#endif //EXERCICE_12_ADRESS_H
