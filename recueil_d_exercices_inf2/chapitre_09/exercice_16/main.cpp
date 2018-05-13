#include <cstdlib>
#include <iostream>

using namespace std;

void f1();
void f2() /*throw (int)*/;

int main() {
	try {
		f();
	} catch (int n) {
		cout << "Exception int dans main : " << n << endl;
	} catch (...) {
		cout << "Exception autre que int dans main" << endl;
	}

	cout << "Fin main\n";
	system("PAUSE");
	return EXIT_SUCCESS;
}

void f1() {
	try {
		int n = 1;
		throw n;
	} catch (int n) {
		cout << "Exception int dans f : " << n << endl;
		throw;
	} 
}

void f2() /*throw (int)*/ {
	try {
		double x = 1;
		throw x;
	} catch (int n) {
		cout << "Exception int dans f : " << n << endl;
		throw;
	} 
}