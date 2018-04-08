#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    try {
        throw 1;
    } catch (int e) {
        cout << "Dans le catch (int) : la valeur recue = " << e << endl;
        throw 2.0;
    } catch (double e) {
        cout << "Dans le catch (double e) : la valeur recue = " << e << endl;
    } catch(...) {
        cout << "Dans le catch (...)" << endl;
    }
    cout << "Fin du programme" << endl;

    return EXIT_SUCCESS;
}
