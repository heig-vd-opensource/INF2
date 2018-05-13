#include <iostream>
#include "message.h"

Message::Message(string expediteur, string destinataire) :
    m_expediteur(expediteur), m_destinataire(destinataire),
    m_creationTime(time(0))
{}

void Message::addLine(string ligne) {
    m_contenu.push_back(ligne);
}

string Message::toString() {
    string output;
    output = "From : ";
    output += m_expediteur;
    output += "\n";
    output += "To : ";
    output += m_destinataire;
    output += "\n";

    // transformation date de creation en string
    struct tm * timeinfo;
    char buffer[80];

    time (&m_creationTime);
    timeinfo = localtime(&m_creationTime);

    strftime(buffer,sizeof(buffer),"%d-%m-%Y %I:%M:%S",timeinfo);
    std::string str(buffer);

    output += "Date : ";
    output += str;
    output += "\n\n";

    // contenu
    for(string line : m_contenu){
        output += line;
        output += "\n";
    }

    return output;
}
