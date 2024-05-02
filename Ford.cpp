#include "Ford.h"

Ford::Ford() : Car(), badgeNumber(0), litresOfFuel(60.0) {}

Ford::Ford(int badgeNumber, int price) : Car(price), badgeNumber(badgeNumber), litresOfFuel(60.0) {}

int Ford::get_badgeNumber() const {
    return badgeNumber;
}

void Ford::set_badgeNumber(int badgeNumber) {
    this->badgeNumber = badgeNumber;
}

float Ford::get_litresOfFuel() const {
    return litresOfFuel;
}

void Ford::set_litresOfFuel(float litres) {
    if (litres < 0) {
        litresOfFuel = 0;
    } else if (litres > 60) {
        litresOfFuel = 60;
    } else {
        litresOfFuel = litres;
    }
}

void Ford::refuel(int litres) {
    litresOfFuel += litres;
    if (litresOfFuel > 60.0) {
        litresOfFuel = 60.0;
    }
}

void Ford::drive(int kms) {
    while (kms > 0 && litresOfFuel > 0) {
        int co2_emission = 234; // grams of CO2 per kilometer
        float fuel_used = kms / 5.0; // 1L of fuel for every 5km driven
        if (fuel_used > litresOfFuel) {
            fuel_used = litresOfFuel;
            litresOfFuel = 0;
        } else {
            litresOfFuel -= fuel_used;
        }
        kms -= fuel_used * 5;
    }
}
