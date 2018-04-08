#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    try {
        try {
            throw 1;
        } catch (int e) {
            cout << "Dans catch (int) : valeur recue = " << e << endl;
            throw 2.0;
        } catch (...) {
            cout << "Dans catch (...)" << endl;
        }
    } catch (double e) {
        cout << "Dans catch (double e) : valeur recue = " << e << endl;
    }
    cout << "Fin du programme" << endl;

return EXIT_SUCCESS;

}
