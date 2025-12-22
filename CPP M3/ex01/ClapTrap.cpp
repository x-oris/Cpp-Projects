#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
    std::cout << "Constructor called" << std::endl;
    this->Name = name;
    this->hitPts = 10;
    this->engPts = 10;
    this->attDmg = 0;
}

ClapTrap::~ClapTrap(){
     std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other){
        this->setName(other.getName());
        this->sethitPts(other.gethitPts());
        this->setengPts(other.getengPts());
        this->setattDmg(other.getattDmg());
    }
    return *this;
}

std::string ClapTrap::getName() const {
    return (this->Name);
}
int ClapTrap::gethitPts() const {
    return (this->hitPts);
}
int ClapTrap::getattDmg() const {
    return (this->attDmg);
}
int ClapTrap::getengPts() const {
    return (this->engPts);
}

void ClapTrap::setName(std::string name){
    this->Name = name;
}
void ClapTrap::sethitPts(unsigned int hitPts){
    this->hitPts = hitPts;
}
void ClapTrap::setattDmg(unsigned int attDmg){
    this->attDmg = attDmg;
}
void ClapTrap::setengPts(unsigned int engPts){
    this->engPts = engPts;
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << this->getName() << " attacks " << target << ", causing " << this->getattDmg() << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->gethitPts() > 0 && this->getengPts() > 0)
    {
        unsigned int energy = getengPts() - 1;
        this->setengPts(energy);
        std::cout << getName() << " is taking " << amount << " of damage !"<< std::endl;
        std::cout << "Energy lowered by 1Pts !" << std::endl;
        std::cout << "Current Energy Pts: " << this->getengPts() << std::endl;
        this->sethitPts(this->gethitPts() - amount);
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->gethitPts() > 0 && this->getengPts() > 0)
    {
        unsigned int energy = getengPts() - 1;
        this->setengPts(energy);
        std::cout << getName() << " is healing ! " << amount << "Pts+ !"<< std::endl;
        std::cout << "Energy lowered by 1Pts !" << std::endl;
        std::cout << "Current Energy Pts: " << this->getengPts() << std::endl;
        this->sethitPts(this->gethitPts() + amount);
    }
}