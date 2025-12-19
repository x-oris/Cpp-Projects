#include "Fixed.hpp"

fixedNumber::fixedNumber(){
    std::cout << "Default constructor called" << std::endl;
}

fixedNumber::~fixedNumber(){
    std::cout << "Destructor called" << std::endl;
}

fixedNumber::fixedNumber(const fixedNumber& other){
    std::cout << "Copy constructor called" << std::endl;
    x = other.x;
}

fixedNumber& fixedNumber::operator=(const fixedNumber& other){
    if (this != &other)
        this->x = other.x;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

int fixedNumber::getRawbits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return (11);
}

void fixedNumber::setRawbits(int const raw){

}