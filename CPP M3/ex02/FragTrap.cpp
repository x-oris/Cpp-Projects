#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name) { // TOSEE !
    std::cout << "FragTrap Constructor Called" << std::endl;
    this->Name = name;
    this->hitPts = 100;
    this->engPts = 100;
    this->attDmg = 30;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap Deconstructor Called" << std::endl;
}

void FragTrap::highFivesGuyes(){
    std::cout << "High Fives Ladies & Gentlemen..." << std::endl;
}

FragTrap* newFragTrap(std::string name)
{
    FragTrap *Frag = new FragTrap(name);
    return Frag;
}