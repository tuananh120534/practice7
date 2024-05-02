#include "Ford.h"
#include <iostream>
#include <iomanip> // For setprecision

Ford::Ford() : badgeNumber(0), litresOfFuel(60) {}

Ford::Ford(int badgeNumber, int price) : Car(price), badgeNumber(badgeNumber), litresOfFuel(60) {}

int Ford::get_badgeNumber() const {
    return badgeNumber;
}

void Ford::set_badgeNumber(int badgeNumber) {
    this->badgeNumber = badgeNumber;
}

float Ford::get_litresOfFuel() const {
    return litresOfFuel;
}

void Ford::set_litresOfFuel(float litresOfFuel) {
    this->litresOfFuel = litresOfFuel;
}

void Ford::refuel(int litres) {
    litresOfFuel += litres;
    if (litresOfFuel > 60) {
        litresOfFuel = 60; // Limiting fuel to 60 litres
    }
}

void Ford::drive(int kms) {
    int fuelUsed = kms / 5; // 1L of fuel for every 5km driven
    if (litresOfFuel > 0) {
        if (fuelUsed >= litresOfFuel) {
            // If there's not enough fuel to cover the distance
            litresOfFuel = 0; // Ford will stop driving when fuel reaches 0
        } else {
            litresOfFuel -= fuelUsed;
        }
        // Calculate CO2 emissions
        float co2Emission = kms * 234; // 234g of CO2 per kilometre
        Car::addCO2(co2Emission); // Assuming there's a method in Car class to emit CO2
    }
}

// For displaying fuel level with one decimal point precision
std::ostream& operator<<(std::ostream& os, const Ford& ford) {
    os << "Current fuel level: " << std::fixed << std::setprecision(1) << ford.get_litresOfFuel() << "L";
    return os;
}
