#include <iostream>
#include "Ford.h"

int main() {
    // Create a Ford object with badge number 123 and price $30000
    Ford ford(123, 30000);
    
    // Display initial fuel level
    std::cout << "Initial fuel level: " << ford.get_litresOfFuel() << "L" << std::endl;
    
    // Refuel the Ford with 20 litres
    ford.refuel(20);
    std::cout << "Fuel level after refueling with 20 litres: " << ford.get_litresOfFuel() << "L" << std::endl;
    
    // Drive the Ford for 50 km
    ford.drive(50);
    std::cout << "Fuel level after driving for 50 km: " << ford.get_litresOfFuel() << "L" << std::endl;
    
    // Drive the Ford until it runs out of fuel
    ford.drive(1000); // Assuming a long drive
    
    std::cout << "Fuel level after driving until empty: " << ford.get_litresOfFuel() << "L" << std::endl;
    
    return 0;
}
