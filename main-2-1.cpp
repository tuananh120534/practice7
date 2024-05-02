#include <iostream>
#include "Tesla.h"
#include "Car.h"
int main() {
    // Create a Tesla object with model 'S' and price $80000
    Tesla tesla('S', 80000);
    
    // Display initial battery percentage
    std::cout << "Initial battery percentage: " << tesla.get_batteryPercentage() << "%" << std::endl;
    
    // Charge the battery for 30 minutes
    tesla.chargeBattery(30);
    std::cout << "Battery percentage after charging for 30 minutes: " << tesla.get_batteryPercentage() << "%" << std::endl;
    
    // Drive the Tesla for 50 km
    tesla.drive(50);
    std::cout << "Battery percentage after driving for 50 km: " << tesla.get_batteryPercentage() << "%" << std::endl;
    
    // Drive the Tesla until the battery runs out
    tesla.drive(1000); // Assuming a long drive
    
    std::cout << "Battery percentage after driving until empty: " << tesla.get_batteryPercentage() << "%" << std::endl;
    
    return 0;
}
