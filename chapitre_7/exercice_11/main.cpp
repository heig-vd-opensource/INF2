
#include <cstdlib>
#include <iostream>
#include "maHeader.h"

using namespace std;

int main() {
    //7.10
    /* Message m("haibo", "lili");
     m.ajouter("Hello,");
     m.ajouter("How are you ?");
     m.ajouter("Waiting your reply.");
     m.afficher();*/
    //7.11
    MailBox mail;
    mail.ajouter("Haibo", "xiaoyan", "Where are you want to eat tonight?");
    cout << "Nbs de message : " << mail.getNbMessage() << endl;

    mail.ajouter("Xiaoyan", "Haibo", "How about in centre city?");
    cout << "Nbs de message : " << mail.getNbMessage() << endl;

    cout << "Get message 1 :\n" << mail.getMessage(1) << endl;
    cout << "Get message 2 :\n" << mail.getMessage(2) << endl;
    cout << "Get message 3 :\n" << mail.getMessage(3) << endl;

    mail.supprimer(3); //ça fait rien
    mail.supprimer(1);
    cout << "Apres suprimer le 1er message, numbers de message : " << mail.getNbMessage() << endl;
    cout << "Get message 1er :\n" << mail.getMessage(1) << endl;
    cout << "Get message 2ieme :\n" << mail.getMessage(2) << endl;

    return (EXIT_SUCCESS);
}
