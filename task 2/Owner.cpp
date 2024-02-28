// HomeOwner.cpp
#include "HomeOwner.h"
#include <iostream>

HomeOwner::HomeOwner(const std::string& name) : name(name) {}

std::string HomeOwner::getName() const {
    return name;
}

void HomeOwner::getsOutOfBed() const {
    std::cout << getName() << " gets out of bed.\n";
}

void HomeOwner::geyserActivated() const {
    std::cout << "Geyser activated for " << getName() << ".\n";
}
