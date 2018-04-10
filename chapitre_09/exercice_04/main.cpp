#include <cstdlib>
#include <iostream>
#include <stdexcept>

using namespace std;

void f() {
    throw out_of_range("out of range");
}

int main() {

    try {
        try {
            f();
        } catch (runtime_error& e) {
            cout << e.what() << endl;
            throw;
        } catch (exception e) {
            cout << e.what() << endl;
            throw;
        }
    } catch (logic_error& e) {
        cout << e.what() << endl;
    } catch (exception& e) {
        cout << e.what() << endl;
    }

    cout << "Fin du programme" << endl;

    return EXIT_SUCCESS;
}
