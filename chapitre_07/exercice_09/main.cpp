
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

class Voiture {
    friend void afficherVoiture(const Voiture& voiture);
public:
    Voiture(int capacite, float conso) : m_capaciteReservoir(capacite),
                                         m_consoMoyenne(conso) {
        m_fuelRestant = capacite;
    }

    static void setPrixEssence(float newPrice) {
        s_prixEssence = newPrice;
    }

    static float getPrixEssence() {
        return s_prixEssence;
    }

    float coutTrajet(const int kilometres){

        return 0.f;
    }

private:
    static float s_prixEssence;
    int m_capaciteReservoir;
    float m_consoMoyenne;
    float m_fuelRestant;
};

float Voiture::s_prixEssence = 1.5;

void afficherPrixEsssence(const float prix) {
    cout << "Prix de l'essence : " << setprecision(2)
         << prix << " Frs" << endl;
}

void afficherVoiture(const Voiture& voiture) {
    cout << "Capacite du reservoir [l] \t : " << voiture.m_capaciteReservoir << endl
         << "Consommation moyenne [l/100km]\t : " << voiture.m_consoMoyenne << endl
         << "Nb litre restants \t : " << voiture.m_fuelRestant << endl << endl;
}

void afficherCoutTrajet(float prix){
    cout << "Cout du trajet : " << prix << " Frs" << endl;
}

int main() {
    afficherPrixEsssence(Voiture::getPrixEssence());
    Voiture::setPrixEssence(1.34);
    afficherPrixEsssence(Voiture::getPrixEssence());

    Voiture v(52, 6.7);
    afficherVoiture(v);
    afficherCoutTrajet(v.coutTrajet(1000));
    afficherVoiture(v);

    afficherCoutTrajet(v.coutTrajet(200));
    afficherVoiture(v);

    return EXIT_SUCCESS;
}
