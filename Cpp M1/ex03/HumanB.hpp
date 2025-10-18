#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *W;
        std::string name;
    public:
        void attack();
        HumanB(std::string name);
        void setWeapon(Weapon& w);
};

#endif