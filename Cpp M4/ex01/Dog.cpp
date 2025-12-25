#include "Dog.hpp"

Dog::Dog(){
    type = "Dog";
    std::cout << "Dog Default Constructor" << std::endl;
}

Dog::Dog(const Dog& other){
    std::cout << "Dog Copy Constructor" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& other){
    std::cout << "Dog Assignement Operator" << std::endl;
    if (this != &other)
        this->setType(other.getType());
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog Deconstructor" << std::endl;
}

void Dog::makesound() const {
    std::cout << "Woof (Dog is making Animal Sound {Barking})" << std::endl;
}