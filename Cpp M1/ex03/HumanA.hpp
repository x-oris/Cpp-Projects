#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon &W;
        std::string name;
    public:
        void attack();
        HumanA(std::string name, Weapon &w);
};

#endif