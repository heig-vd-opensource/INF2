
#include <cstdlib>
#include "iostream"
#include "robot.h"

using namespace std;

int main(){

    Robot robot;
    cout << "position de base: " << robot.getPosition() << endl;
    robot.deplacer(2);
    cout << "position: " << robot.getPosition() << endl;
    robot.demiTour();
    robot.deplacer(2);
    cout << "position: " << robot.getPosition() << endl;

    return EXIT_SUCCESS;
}