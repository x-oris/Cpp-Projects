#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal") {
    std::cout << "WrongAnimal Default Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
    std::cout << "WrongAnimal Copy Constructor" << std::endl;
    *this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
    std::cout << "WrongAnimal Assignement Operator" << std::endl;
    if (this != &other)
        this->setType(other.getType());
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal Deconstructor" << std::endl;
}

void WrongAnimal::setType(std::string type){
    this->type = type;
}

std::string WrongAnimal::getType() const {
    return (this->type);
}

void WrongAnimal::makesound() const{
    std::cout << "WrongAnimal Making Sound" << std::endl;
}
