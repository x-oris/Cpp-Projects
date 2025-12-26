#include "XAnimal.hpp"

XAnimal::XAnimal(): type("XAnimal") {
    std::cout << "XAnimal Default Constructor" << std::endl;
}

XAnimal::XAnimal(const XAnimal& other){
    std::cout << "XAnimal Copy Constructor" << std::endl;
    *this = other;
}

XAnimal& XAnimal::operator=(const XAnimal& other){
    std::cout << "XAnimal Assignement Operator" << std::endl;
    if (this != &other)
        this->setType(other.getType());
    return *this;
}

XAnimal::~XAnimal(){
    std::cout << "XAnimal Deconstructor" << std::endl;
}

void XAnimal::setType(std::string type){
    this->type = type;
}

std::string XAnimal::getType() const {
    return (this->type);
}

// void XAnimal::makesound() const{
//     std::cout << "XAnimal Making Sound" << std::endl;
// }
