#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name) {
    std::cout << "FragTrap Constructor Called" << std::endl;
    this->Name = name;
    this->hitPts = 100;
    this->engPts = 100;
    this->attDmg = 30;
}

FragTrap::FragTrap(){
    std::cout << "FragTrap Default Constructor Called" << std::endl;
    this->Name = "Noname";
    this->hitPts = 100;
    this->engPts = 100;
    this->attDmg = 30;
}

FragTrap::FragTrap(const FragTrap& other){
    std::cout << "FragTrap Copy Constructor Called" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other){
    std::cout << "FragTrap Assignement Operator called" << std::endl;
    if (this != &other){
        this->setName(other.getName());
        this->sethitPts(other.gethitPts());
        this->setengPts(other.getengPts());
        this->setattDmg(other.getattDmg());
    }
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap Deconstructor Called" << std::endl;
}

void FragTrap::highFivesGuyes(){
    std::cout << "High Fives Ladies & Gentlemen..." << std::endl;
}
