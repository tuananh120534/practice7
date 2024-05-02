#include "Fleet.h"
#include <iostream>

int main() {
    Fleet my_fleet;
    Car** fleet = my_fleet.get_fleet();

    std::cout << "Fleet created:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Car " << i + 1 << " - Price: $" << fleet[i]->get_price() << std::endl;
    }

    return 0;
}
