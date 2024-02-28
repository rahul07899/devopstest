// SmartHomeSystem.cpp
#include "SmartHomeSystem.h"
#include <iostream>

SmartHomeSystem::SmartHomeSystem(HomeOwner& owner, TemperatureSensor& sensor, HeatingSystem& heatingSystem)
    : owner(owner), sensor(sensor), heatingSystem(heatingSystem) {}

void SmartHomeSystem::activateGeyser() {
    owner.geyserActivated();
    double currentTemperature = sensor.getCurrentTemperature();
    std::cout << "Current temperature: " << currentTemperature << "°C\n";

    double requiredTemperature = heatingSystem.calculateRequiredTemperature(currentTemperature);
    std::cout << "Calculating required temperature: " << requiredTemperature << "°C\n";

    std::cout << "Heating system adjusts to " << requiredTemperature << "°C.\n";

    // Additional logic for activating geyser based on required temperature can be added here
    owner.geyserActivated();
}
