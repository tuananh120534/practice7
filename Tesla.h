#ifndef TESLA_H
#define TESLA_H

#include "Car.h"

class Tesla : public Car {
private:
    char model;
    float batteryPercentage; // Initially 100%
public:
    Tesla();
    Tesla(char model, int price);
    
    char get_model() const;
    void set_model(char model);
    
    float get_batteryPercentage() const;
    void set_batteryPercentage(float percentage);
    
    void chargeBattery(int mins);
    void drive(int kms);
};

#endif // TESLA_H
