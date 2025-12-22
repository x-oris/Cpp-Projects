#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap xoris("xoris");
    ScavTrap Keeper("GateKeeper");
    FragTrap NonAllocFrag("NonAllocFrag");
    FragTrap *AllocFrag = newFragTrap("AllocFrag");

    std::cout << "---------------------- Xoris Attacks ------------------" << std::endl;
    xoris.attack("SomeoneX");
    xoris.takeDamage(11);
    xoris.beRepaired(11);
    std::cout << "---------------------- GateKeeper Attacks ------------------" << std::endl;
    Keeper.attack("SomeoneX");
    Keeper.guardGate();
    std::cout << "---------------------- AllocFrag Attacks ------------------" << std::endl;
    AllocFrag->attack("SomeoneW");
    NonAllocFrag.highFivesGuyes();
    delete AllocFrag;
    std::cout << "---------------------- NonAllocFrag Attacks ------------------" << std::endl;
    NonAllocFrag.attack("SomeoneY");
    NonAllocFrag.highFivesGuyes();
    std::cout << "----------------------    *********    ------------------" << std::endl;
    return 0;
}