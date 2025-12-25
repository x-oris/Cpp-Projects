#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat Default Constructor" << std::endl;
}

Cat::Cat(const Cat& other){
    std::cout << "Cat Copy Constructor" << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat& other){
    std::cout << "Cat Assignement Operator" << std::endl;
    if (this != &other)
        this->setType(other.getType());
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat Deconstructor" << std::endl;
}