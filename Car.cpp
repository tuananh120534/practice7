#include "Car.h"

Car::Car() {
}

Car::Car(int price) : price(price), emissions(0) {}

int Car::get_price() const {
    return price;
}

void Car::set_price(int price) {
    this->price = price;
}

void Car::set_emissions(int emissions) {
    this->emissions = emissions;
}

int Car::get_emissions() const {
    return emissions;
}

void Car::drive(int kms) {
    emissions += 20 * kms;
}
