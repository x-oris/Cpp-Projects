#include "Animal.hpp"

Animal::Animal(): type("Animal") {
    std::cout << "Animal Default Constructor" << std::endl;
}

Animal::Animal(const Animal& other){
    std::cout << "Animal Copy Constructor" << std::endl;
    *this = other;
}

Animal& Animal::operator=(const Animal& other){
    std::cout << "Animal Assignement Operator" << std::endl;
    if (this != &other)
        this->setType(other.getType());
    return *this;
}

Animal::~Animal(){
    std::cout << "Animal Deconstructor" << std::endl;
}

void Animal::setType(std::string type){
    this->type = type;
}

std::string Animal::getType() const {
    return (this->type);
}

void Animal::makesound() const{
    std::cout << "Animal Making Sound" << std::endl;
}
