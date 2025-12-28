#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
    std::cout << "Constructor called" << std::endl;
    this->Name = name;
    this->hitPts = 10;
    this->engPts = 10;
    this->attDmg = 0;
}

ClapTrap::ClapTrap(){
    std::cout << "Default Constructor called" << std::endl;
    this->Name = "Noname";
    this->hitPts = 10;
    this->engPts = 10;
    this->attDmg = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other){
    std::cout << "Copy Constructor Called" << std::endl;
    *this = other;
}

ClapTrap::~ClapTrap(){
     std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap Assignement Operator called" << std::endl;
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
unsigned int ClapTrap::gethitPts() const {
    return (this->hitPts);
}
unsigned int ClapTrap::getattDmg() const {
    return (this->attDmg);
}
unsigned int ClapTrap::getengPts() const {
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
        std::cout << this->getName() << " attacks " << target << ", causing " << this->getattDmg() << " points of damage !" << std::endl;
    }
    else
        std::cout << "ClapTrap has no hitPts or Energy Pts to perform the action..." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    int taker = amount;
    if (taker > 0)
    {
        std::cout << getName() << " is taking " << taker << " of damage !"<< std::endl;
        long catcher = this->gethitPts();
        if (catcher - amount < 0)
            sethitPts(0);
        else
            this->sethitPts(this->gethitPts() - amount);
    }
    else {
        std::cout << "Cannot take negative or zero damages..." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->gethitPts() > 0 && this->getengPts() > 0)
    {
        int catcher = this->getengPts();
        if (catcher - 1 < 0)
            this->setengPts(0);
        else
        {
            unsigned int energy = this->getengPts() - 1;
            this->setengPts(energy);
            std::cout << "Energy lowered by 1Pts !" << std::endl;
        }
        std::cout << getName() << " is healing ! " << std::endl;
        std::cout << "Current Energy Pts: " << this->getengPts() << std::endl;
        unsigned long catcher_v2 = this->gethitPts();
        if (catcher_v2 + amount >= UINT_MAX)
            this->sethitPts(1000);
        else
            this->sethitPts(this->gethitPts() + amount);
    }
    else
        std::cout << "ClapTrap has no hitPts or Energy Pts to perform this action..." << std::endl;
}