#ifndef HOMEOWNER_H
#define HOMEOWNER_H

#include <string>

class HomeOwner {
public:
    HomeOwner(const std::string& name);

    std::string getName() const;

    void getsOutOfBed() const;

    void geyserActivated() const;

private:
    std::string name;
};

#endif // HOMEOWNER_H
