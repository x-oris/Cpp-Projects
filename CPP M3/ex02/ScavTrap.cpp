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
    this->Name = "Noname";
    this->hitPts = 100;
    this->engPts = 50;
    this->attDmg = 20;
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
    if (this->gethitPts() > 0 && this->getengPts() > 0)
    {
        int catcher = this->getengPts();
        if (catcher - 1 < 0)
        {
            std::cout << "Energy Pts are finished" << std::endl;
            this->setengPts(0);
        }
        else
        {
            unsigned int energy = this->getengPts() - 1;
            this->setengPts(energy);
            std::cout << "Energy lowered by 1Pts !" << std::endl;
            std::cout << "Current Energy Pts: " << this->getengPts() << std::endl;
        }
        std::cout << "ScavTrap is going to attack..." << std::endl;
        std::cout << this->getName() << " attacks " << target << ", causing " << this->getattDmg() << " points of damage !" << std::endl;
    }
    else
        std::cout << "ScavTrap has no hitPts or Energy Pts to perform the action..." << std::endl;
}