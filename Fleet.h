#ifndef FLEET_H
#define FLEET_H

#include "Car.h"
#include "Tesla.h"
#include "Ford.h"
class Fleet {
private:
    Car** fleet;

public:
    Fleet();
    Car** get_fleet();
    ~Fleet(); // Destructor to deallocate memory
};

#endif // FLEET_H
