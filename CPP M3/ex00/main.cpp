#include "ClapTrap.hpp"

int main()
{
    ClapTrap xoris("Xoris");
    
    xoris.attack("SomeoneX");
    xoris.takeDamage(5);
    xoris.beRepaired(11);
    return 0;
}