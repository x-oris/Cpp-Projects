#include "WrongCat.hpp"

WrongCat::WrongCat(){
    type = "WrongCat";
    std::cout << "WrongCat Default Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other){
    std::cout << "WrongCat Copy Constructor" << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other){
    std::cout << "WrongCat Assignement Operator" << std::endl;
    if (this != &other)
        this->setType(other.getType());
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat Deconstructor" << std::endl;
}

void WrongCat::makesound() const {
    std::cout << "Meooooow...(WrongCat Making Sound {Meowing})" << std::endl;
}