#include "Fixed.hpp"

Fixed::Fixed(){
    x = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other){
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->x = other.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    return (x);
}

void Fixed::setRawBits(int const raw){
    x = raw;
}

float Fixed::toFloat() const {
    float result = 1 << fract;
    return (x / result);
}

int Fixed::toInt() const {
    return (x >> fract);
}

Fixed::Fixed(const int n){
    std::cout << "Int constructor called" << std::endl;
    x = n << fract;
}

Fixed::Fixed(const float n){
    std::cout << "Float constructor called" << std::endl;
    x = roundf(n * 256);
}

std::ostream& operator<<(std::ostream &out, const Fixed& input){
    return (out << input.toFloat());
}

// Overloaded Operators
bool Fixed::operator>(const Fixed& other){
    if (this->getRawBits() > other.getRawBits())
        return true;
    return false;
}

bool Fixed::operator<(const Fixed& other){
    if (this->getRawBits() < other.getRawBits())
        return true;
    return false;
}

bool Fixed::operator==(const Fixed& other){
    if (this->getRawBits() == other.getRawBits())
        return true;
    return false;
}

bool Fixed::operator!=(const Fixed& other){
    if (this->getRawBits() != other.getRawBits())
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed& other){
    if (this->getRawBits() <= other.getRawBits())
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed& other){
    if (this->getRawBits() >= other.getRawBits())
        return true;
    return false;
}

// Arithmetic Operators
int Fixed::operator+(const Fixed& other){
    return (this->getRawBits() + other.getRawBits());
}

int Fixed::operator-(const Fixed& other){
    return (this->getRawBits() - other.getRawBits());
}

int Fixed::operator*(const Fixed& other){
    return (this->getRawBits() * other.getRawBits());
}

int Fixed::operator/(const Fixed& other){
    return (this->getRawBits() / other.getRawBits());
}

// Post/Pre Incre/Decrements
Fixed& Fixed::operator++(){
    this->x++;
    return *this;
}

Fixed& Fixed::operator--(){
    this->x++;
    return *this;
}

Fixed& Fixed::operator++(int){
    ++this->x;
    return *this;
}

Fixed& Fixed::operator--(int){
    --this->x;
    return *this;
}