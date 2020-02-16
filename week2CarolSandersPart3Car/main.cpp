#include <iostream>

using namespace std;

int checkBatter(); // prototyping function because it is listed after  main()
int checkGasLevel();
int turnRight();


class Car{
    private: // Access specifier
        int gasLevel;
        int amountOfGas;
        int gearCarIn;
        bool carInMotion;
    public:
        int checkBattery(genData a, genData b){};
        int checkGasLevel(genData gasLevel){};
        int turnRight(genData dist){};
        int turnLeft(genData, a){};
        int goStraight(genData, d){};
        int shiftGearFwd(genData, gearCarIn){};
        int shiftGearBkwd(genData, gearCarIn){};
        int startCar(genData, amontOfGas){};
        bool parkCar(carInMotion){};
        int MoveCar(ft){};
};

int main() {
    std::cout << "Hello, World!", me << std::endl;
    CarolClass carolCar;
    carolCar.checkBattery();

    cout << checkBattery();
    return 0;
}

int checkBattery(int startTime, int runTime) {
    if (carInMotion) {
        batteryStatus =  startTime + runTime;
    }

    return batteryStatus;
}

int checkGasLevel(genData gasLevel) {

    return gasLevel;
}

int turnRight(genData dist){
    return dist;
}

bool parkCar(carInMotion){
    if (carInMotion) {
        carInMotion = false;
    }
    return carInMotion;
}


// Part  3  –  Write OO Program.

// You may work individually or in a team of 2 students.
// Create a class called CAR.
// Have several variables - use necessary variables that store
//       gas level, amount of gas, gear car is in, car in motion.. etc

// Have functions that do:
// Check the battery level
// Check the gas level
// Turn right, Left,
// Go Straight
// Put car in forward gear
// Put car in backward gear
// Start Car  (function should check if batter is good and you have gas)
//         Example: If good then print message "car started", if not "print car not started because ...."

// Park Car
// Move car # number of feet. (Car uses 1 unit of gas per 50 feet)
//    (subtract 1 unit of gas per 50 feet traveled)
// As the car moves (determine if it needs gas)

// Note: as you instruct the computer to perform a command in the main function, have your

// function print out messages for each action.

// Have a dashboard/Interface in which the user can make interactive/Live choices on how to drive the car.
// Very simple. Be creative.

