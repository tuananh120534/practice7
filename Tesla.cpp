#include "Tesla.h"

Tesla::Tesla() : Car(), model(' '), batteryPercentage(100.0) {}

Tesla::Tesla(char model, int price) : Car(price), model(model), batteryPercentage(100.0) {}

char Tesla::get_model() {
    return model;
}

void Tesla::set_model(char model) {
    this->model = model;
}

float Tesla::get_batteryPercentage() {
    return batteryPercentage;
}

void Tesla::set_batteryPercentage(float batteryPercentage) {
    if (batteryPercentage < 0) {
        this->batteryPercentage = 0;
    } else if (batteryPercentage > 100) {
        this->batteryPercentage = 100;
    } else {
        this->batteryPercentage = batteryPercentage;
    }
}

void Tesla::chargeBattery(int mins) {
    batteryPercentage += 0.5 * mins;
    if (batteryPercentage > 100) {
        batteryPercentage = 100;
    }
}

void Tesla::drive(int kms) {
    if (batteryPercentage > 0) {
        int distance = kms;
        while (distance > 0 && batteryPercentage > 0) {
            Car::drive(1);
            distance--;
            if (distance % 5 == 0) {
                batteryPercentage -= 1;
            }
        }
    }
}
