#include "ClapTrap.hpp"

int main()
{
    ClapTrap xoris;

    xoris.setName("Xoris");
    xoris.sethitPts(10);
    xoris.setengPts(10);
    xoris.setattDmg(0);

    xoris.attack("SomeoneX");
    xoris.takeDamage(11);
    xoris.beRepaired(11);
    return 0;
}