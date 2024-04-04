
#include <iostream>
#include "Elevator.h"

int Elevator::ElevatorNumber = 0;

using namespace std;

int main()
{
    Elevator a(0, 5);
    Elevator b(-2, 3, -1, true);

    cout << "Home work 3\n";
    cout << "A elevator stage: " << a.getStage() << endl;
    cout << "B elevator stage: " << b.getStage() << endl;
    cout << "------------------------------\n";

    a.callElivator(3);
    b.callElivator(3);

    cout << "A elevator stage: " << a.getStage() << endl;
    cout << "B elevator stage: " << b.getStage() << endl;
    cout << "------------------------------\n";

    a.switchStatus();

    a.callElivator(5);
    b.callElivator(5);

    cout << "A elevator stage: " << a.getStage() << endl;
    cout << "B elevator stage: " << b.getStage() << endl;

    cout << "Elevator number: " << Elevator::getElevatorNumber() << endl;

    cout << "Home work 4\n";
    Elevator c(0, 5, 2, true);
    Elevator d(-2, 3, true);
    Elevator g = d;

    Elevator& nearest = c.getNearest(g, 1);
    cout << "Nearest: " << nearest.getStage() << endl;
    d.callElivator(3);
    cout << "Upper: " << c.getUpper(d).getStage();

}
