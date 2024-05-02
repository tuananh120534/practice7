#include <iostream>
#include "Tesla.h"

int main() {
    Tesla myTesla('S', 70000);
    std::cout << "Model: " << myTesla.get_model() << std::endl;
    std::cout << "Price: " << myTesla.get_price() << std::endl;
    std::cout << "Battery Percentage before drive: " << myTesla.get_batteryPercentage() << "%" << std::endl;
    std::cout << "Emissions before drive: " << myTesla.get_emissions() << std::endl;
    myTesla.drive(10);
    std::cout << "Battery Percentage after drive: " << myTesla.get_batteryPercentage() << "%" << std::endl;
    std::cout << "Emissions after drive: " << myTesla.get_emissions() << std::endl;
    return 0;
}
