// main.cpp
#include "HomeOwner.h"
#include "TemperatureSensor.h"
#include "HeatingSystem.h"
#include "SmartHomeSystem.h"

int main() {
    HomeOwner john("John Doe");
    TemperatureSensor sensor;
    HeatingSystem heatingSystem;

    SmartHomeSystem smartHomeSystem(john, sensor, heatingSystem);
    john.getsOutOfBed();
    smartHomeSystem.activateGeyser();

    return 0;
}
