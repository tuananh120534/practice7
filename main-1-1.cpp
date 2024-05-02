#include <iostream>
#include "Car.h"

int main() {
    Car myCar(20000);

    std::cout << "Initial Emissions: " << myCar.get_emissions() << std::endl;

    myCar.drive(10);
    std::cout << "Emissions after driving 10 kms: " << myCar.get_emissions() << std::endl;

    return 0;
}
