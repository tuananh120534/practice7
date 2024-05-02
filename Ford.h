#ifndef FORD_H
#define FORD_H

#include "Car.h"

class Ford : public Car {
private:
    int badgeNumber;
    float litresOfFuel; // Initially 60L

public:
    Ford();
    Ford(int badgeNumber, int price);

    // Getter and setter for badgeNumber
    int get_badgeNumber() const;
    void set_badgeNumber(int badgeNumber);

    // Getter and setter for litresOfFuel
    float get_litresOfFuel() const;
    void set_litresOfFuel(float litresOfFuel);

    void refuel(int litres);
    void drive(int kms);
};

#endif // FORD_H
