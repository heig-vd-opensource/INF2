#ifndef EXERCICE_10_MESSAGE_H
#define EXERCICE_10_MESSAGE_H

#include <string>
#include <vector>
#include <ctime>

using namespace std;

class Message {
public:
    Message(string expediteur, string destinataire);
    void addLine(string ligne);
    string toString();

private:
    string m_expediteur;
    string m_destinataire;
    vector<string> m_contenu;
    time_t m_creationTime;
};


#endif //EXERCICE_10_MESSAGE_H
