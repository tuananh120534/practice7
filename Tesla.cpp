#include "Tesla.h"

Tesla::Tesla() : Car(), model('\0'), batteryPercentage(100.0) {}

Tesla::Tesla(char model, int price) : Car(price), model(model), batteryPercentage(100.0) {}

char Tesla::get_model() const {
    return model;
}

void Tesla::set_model(char model) {
    this->model = model;
}

float Tesla::get_batteryPercentage() const {
    return batteryPercentage;
}

void Tesla::set_batteryPercentage(float percentage) {
    if (percentage < 0) {
        batteryPercentage = 0;
    } else if (percentage > 100) {
        batteryPercentage = 100;
    } else {
        batteryPercentage = percentage;
    }
}

void Tesla::chargeBattery(int mins) {
    float charge = mins * 0.5;
    batteryPercentage += charge;
    if (batteryPercentage > 100.0) {
        batteryPercentage = 100.0;
    }
}

void Tesla::drive(int kms) {
    while (kms > 0 && batteryPercentage > 0) {
        int co2_emission = 74; // grams of CO2 per kilometer
        float battery_used = kms / 5.0; // 1% battery for every 5km driven
        if (battery_used > batteryPercentage) {
            battery_used = batteryPercentage;
            batteryPercentage = 0;
        } else {
            batteryPercentage -= battery_used;
        }
        kms -= battery_used * 5;
        Car::addCO2(co2_emission);
    }
}
