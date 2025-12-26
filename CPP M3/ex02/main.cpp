#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap xoris("xoris");
    ScavTrap Keeper("GateKeeper");
    FragTrap Frag("Frag");

    std::cout << "---------------------- Xoris Attacks ------------------" << std::endl;
    xoris.attack("SomeoneX");
    xoris.takeDamage(11);
    xoris.beRepaired(11);
    std::cout << "---------------------- GateKeeper Attacks ------------------" << std::endl;
    Keeper.attack("SomeoneX");
    Keeper.beRepaired(55);
    Keeper.guardGate();
    std::cout << "---------------------- NonAllocFrag Attacks ------------------" << std::endl;
    Frag.attack("SomeoneY");
    Frag.takeDamage(66);
    Frag.highFivesGuyes();
    std::cout << "----------------------    *********    ------------------" << std::endl;
    return 0;
}