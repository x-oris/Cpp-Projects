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
}

FragTrap::FragTrap(const FragTrap& other){
    std::cout << "Copy Constructor Called" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other){
    std::cout << "Assignement Operator called" << std::endl;
    if (this != &other){
        *this = other;
    }
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap Deconstructor Called" << std::endl;
}

void FragTrap::highFivesGuyes(){
    std::cout << "High Fives Ladies & Gentlemen..." << std::endl;
}
