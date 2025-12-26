#include "Dog.hpp"

Dog::Dog(){
    type = "Dog";
    Br = new Brain();
    std::cout << "Dog Default Constructor" << std::endl;
}

Dog::Dog(const Dog& other){
    std::cout << "Dog Copy Constructor" << std::endl;
    this->Br = new Brain();
    *this->Br = *other.Br;
}

Dog& Dog::operator=(const Dog& other){
    std::cout << "Dog Assignement Operator" << std::endl;
    if (this != &other)
    {
        this->setType(other.getType());
        delete this->Br;
        this->Br = new Brain();
        *this->Br = *other.Br;
    }
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog Deconstructor" << std::endl;
    delete Br;
}

void Dog::makesound() const {
    std::cout << "Woof (Dog is making Animal Sound {Barking})" << std::endl;
}