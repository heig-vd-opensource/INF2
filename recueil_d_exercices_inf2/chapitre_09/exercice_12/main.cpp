#include <cstdlib>
#include <iostream>
#include <stdexcept>

using namespace std;

void inserer(int tab[], size_t capacite, size_t& taille, int valeur, size_t pos = 0);

void afficher(const int tab[], size_t taille);

int main() {
	try {
		const size_t CAPACITE = 5;
		int tab[CAPACITE] = {2, 3, 5};
		size_t taille = 3;
		afficher(tab, taille);
		inserer(tab, CAPACITE, taille, 4, 2);
		afficher(tab, taille);
		inserer(tab, CAPACITE, taille, 1);
		afficher(tab, taille);
		inserer(tab, CAPACITE, taille, 0);
		afficher(tab, taille);
	} catch(const exception& e) {
		cout << e.what() << endl;
	}
	
	return EXIT_SUCCESS;
}

void inserer(int tab[], size_t capacite, size_t& taille, int valeur, size_t pos) {
	if ( taille >= capacite )
		throw runtime_error("Insertion impossible car tableau plein");
	
	if ( pos > taille )
		throw invalid_argument("pos doit etre <= taille");
	
	for (size_t i = taille; i > pos; i--)
		tab[i] = tab[i-1];

	tab[pos] = valeur;
	taille++;
}

void afficher(const int tab[], size_t taille) {
	cout << "[";
	for (size_t i = 0; i < taille; ++i) {
		if ( i > 0 )
			cout << ", ";

		cout << tab[i];
	}
	cout << "]\n";
}

// [2, 3, 5]
// [2, 3, 4, 5]
// [1, 2, 3, 4, 5]
// Insertion impossible car tableau plein