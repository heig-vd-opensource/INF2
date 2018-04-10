# Exercice 1
## try / catch (1)

Que va produire, à l'exécution, le programme ci-dessous ?

```cpp

#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    try {
        throw 1;
    } catch (int e) {
        cout << "Dans catch (int) : valeur recue = " << e << endl;
        throw 2.0;
    } catch (double e) {
        cout << "Dans catch (double e) : valeur recue = " << e << endl;
    } catch (...) {
        cout << "Dans catch (...)" << endl;
    } cout << "Fin du programme" << endl;

    return EXIT_SUCCESS;
}
```
