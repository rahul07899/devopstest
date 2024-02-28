// SmartHomeSystem.h
#ifndef SMARTHOMESYSTEM_H
#define SMARTHOMESYSTEM_H

#include "HomeOwner.h"
#include "TemperatureSensor.h"
#include "HeatingSystem.h"

class SmartHomeSystem {
public:
    SmartHomeSystem(HomeOwner& owner, TemperatureSensor& sensor, HeatingSystem& heatingSystem);

    void activateGeyser();

private:
    HomeOwner& owner;
    TemperatureSensor& sensor;
    HeatingSystem& heatingSystem;
};

#endif // SMARTHOMESYSTEM_H
N