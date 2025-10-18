#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
    std::string type;
    public:
    Weapon(std::string type);
    const std::string& getType();
    void setType(std::string type);
};

//  Pay attention to this ones down here,
//  take them up the class to see the error
#include "HumanA.hpp"
#include "HumanB.hpp"

#endif