#include <cstdlib>
#include <iostream>
#include <exception>

using namespace std;

void f() throw (int, char);

void onUnexpected() {
	throw 'q';
}

int main() {
	set_unexpected(onUnexpected);

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

void f() throw (int, char) {
	try {
		double x = 1.;
		throw x;
	} catch (int n) {
		cout << "Exception int dans f : " << n << endl;
		throw;
	}
}