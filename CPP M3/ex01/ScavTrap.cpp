#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    std::cout << "ScavTrap Constructor Called" << std::endl;
    this->Name = name;
    this->hitPts = 100;
    this->engPts = 50;
    this->attDmg = 20;
}

ScavTrap::ScavTrap(){
    std::cout << "ScavTrap Default Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other){
    std::cout << "Copy Constructor Called" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
    std::cout << "Assignement Operator called" << std::endl;
    if (this != &other){
        *this = other;
    }
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap Deconstructor Called" << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gate keeper Mode..." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    std::cout << "Gate Keeper Attacking..." << std::endl;
    std::cout << this->getName() << " attacks " << target << ", causing " << this->getattDmg() << " points of damage !" << std::endl;
}