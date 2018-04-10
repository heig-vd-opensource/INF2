# Exercice 3
## try / catch (3)

Que va produire, à l'exécution, le programme ci-dessous ?

```cpp
#include <cstdlib>
#include <iostream>

using namespace std;

void f() {
    throw 'A';
}

int main() {
    try {
        try {
            f();
        } catch (int) {
            cout << "Dans catch (int) 1" << endl;
            throw;
        } catch (...) {
            cout << "Dans catch (...) 1" << endl;
            throw 65;
        }
    } catch (int&) {
        cout << "Dans catch (int&)" << endl;
    } catch (int) {
        cout << "Dans catch (int) 2" << endl;
    } catch (const int) {
        cout << "Dans catch (const int)" << endl;
    } catch (...) {
        cout << "Dans catch (...) 2" << endl;
    }
    
    cout << "Fin du programme" << endl;
    
    return EXIT_SUCCESS;
}
```
