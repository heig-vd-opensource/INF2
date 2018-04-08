#include "mailbox.h"

#include <iostream>

using namespace std;

MailBox::MailBox() : compteur(0) {
}

//modificateur

void MailBox::ajouter(const string& expditeur, const string& destinataire, const string& ligneTexte) {
    Message m(expditeur, destinataire);
    m.ajouter(ligneTexte);
    mailbox.push_back(m.toString());
    compteur++;
    //cout <<sizeof(mailbox);
}

void MailBox::supprimer(size_t ieme) {

    if (ieme > 0 && ieme <= compteur) {
        mailbox.erase(mailbox.begin() + ieme - 1);
        compteur--;
    }
}
//getteur

string MailBox::getMessage(size_t ieme)const {
    if (ieme > 0 && ieme <= compteur)
        return mailbox.at(ieme - 1);
    else {
        return out_of_range();
    }
}

size_t MailBox::getNbMessage()const {
    return compteur;
}

string MailBox::out_of_range()const {

    return "Le message ceque vous cherchez n'exist pas!";

}

Message::Message(const string& expediteur, const string& destinataire)
        : expediteur(expediteur), destinataire(destinataire) {
}

void Message::ajouter(const string& ligneTexte) {
    texteMessage.push_back(ligneTexte);
}

string Message::toString() const {
    const string FORMAT = "%d.%m.%Y %H:%M"; //Exemple : 22.02.2016 21:15
    //const string FORMAT = "%d.%m.%Y %X"; //Exemple : 22.02.2016 21:15:20
    char buffer[256];
    strftime(buffer, sizeof (buffer), FORMAT.c_str(), localtime(&DATE_CREATION));
    string str = "From : " + expediteur + '\n' +
                 "To : " + destinataire + '\n' +
                 "Date : " + buffer + '\n';
    str += '\n';
    for (const string& s : texteMessage)
        str += s + '\n';
    return str;
}

void Message::afficher() const {
    cout << this->toString();
}