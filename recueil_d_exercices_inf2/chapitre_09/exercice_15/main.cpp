#include <cstdlib>
#include <iostream>
#include <exception>

using namespace std;

void onExit() {
	cout << "Appel de exit\n";
	system("PAUSE");
}

void onTerminate() {
	cout << "Appel de terminate\n";
	// exit(EXIT_FAILURE); // pour éviter que le programme ne "plante"
}

int main() {
	atexit(onExit);
	set_terminate(onTerminate);

	int n;
	float x;
	double y;

	cout << "Donnez un entier : ";
	cin >> n;

	try {
		switch (n) {
			case 1:
				throw n;
			case 2:
				x = n;
				throw x;
			case 3:
				y = n;
				throw y;
		}
	} catch (int n) {
		cout << "catch(int n) : n = " << n << endl;
	} catch (float x) {
		cout << "catch(float x) : x = " << x << endl; 
		exit(EXIT_FAILURE);
	}

	cout << "Fin du programme\n";
	return EXIT_SUCCESS;
}