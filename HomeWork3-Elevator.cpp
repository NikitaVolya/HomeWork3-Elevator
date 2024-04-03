
#include <iostream>
#include "Elevator.h"

int Elevator::ElevatorNumber = 0;

using namespace std;

int main()
{
    Elevator a(0, 5);
    Elevator b(-2, 3, -1, true);

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
}
