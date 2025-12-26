#include "Cat.hpp"

Cat::Cat(){
    type = "Cat";
    Br = new Brain();
    std::cout << "Cat Default Constructor" << std::endl;
}

Cat::Cat(const Cat& other){
    std::cout << "Cat Copy Constructor" << std::endl;
    this->Br = new Brain();
    *this->Br = *other.Br;
}

Cat& Cat::operator=(const Cat& other){
    std::cout << "Cat Assignement Operator" << std::endl;
    if (this != &other)
    {
        this->setType(other.getType());
        delete this->Br;
        this->Br = new Brain();
        *this->Br = *other.Br;
    }
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat Deconstructor" << std::endl;
    delete Br;
}

void Cat::makesound() const {
    std::cout << "Meow...(Cat Making Sound {Meowing})" << std::endl;
}