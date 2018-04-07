
#include <cstdlib>
#include <iostream>
#include "message.h"

using namespace std;

int main(){

    Message message("Pierre Burki", "Alfred Strohmeier");

    message.addLine("Cher ami,");
    message.addLine("RDV demain a 9h.");

    cout << message.toString();

    return EXIT_SUCCESS;
}
