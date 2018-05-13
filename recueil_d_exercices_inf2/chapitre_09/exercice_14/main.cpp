#include <cstdlib>
#include <iostream>

using namespace std;

void onExit() {
	cout << "Appel de exit\n";
	system("PAUSE");
}

int main() {
	atexit(onExit);
	int n; 
	cout << "Donnez un entier : ";
	cin >> n;
	try {
		cout << "Debut du premier bloc try\n";
		if (n) throw n;
		cout << "Fin du premier bloc try\n";
	} catch (int n) {
		if (n == 1)
			cout << "catch 1 : n = " << n << endl;
		else
			exit(EXIT_FAILURE);
	}

	cout << "... suite du programme\n";

	try {
		cout << "Debut du second bloc try\n";
		throw n;
		cout << "Fin du second bloc try\n";
	} catch (int n) {
		cout << "catch 2 : n = " << n << endl;
	}

	cout << "Fin du programme\n";
	return EXIT_SUCCESS;
}