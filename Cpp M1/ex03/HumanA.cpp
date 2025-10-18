#include "HumanA.hpp"

void HumanA::attack()
{
    std::cout << name << " attacks with their " << W.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &w): W(w)
{
    this->name = name;
}