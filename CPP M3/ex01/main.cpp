#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap xoris("xoris");
    ScavTrap Keeper("GateKeeper");

    std::cout << "---------------------- Xoris Attacks ------------------" << std::endl;
    xoris.attack("SomeoneX");
    xoris.takeDamage(11);
    xoris.beRepaired(11);
    std::cout << "---------------------- GateKeeper Attacks ------------------" << std::endl;
    Keeper.attack("SomeoneX");
    Keeper.guardGate();
    return 0;
}