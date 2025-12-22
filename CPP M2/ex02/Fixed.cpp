#include "Fixed.hpp"

Fixed::Fixed(){
    x = 0;
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other){
    // std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other){
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->x = other.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    return (x);
}

void Fixed::setRawBits(int const raw) {
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
    // std::cout << "Int constructor called" << std::endl;
    x = n << fract;
}

Fixed::Fixed(const float n){
    // std::cout << "Float constructor called" << std::endl;
    int res = 1 << fract;
    x = roundf(n * res);
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
Fixed Fixed::operator+(const Fixed& other){
    return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other){
    return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other){
    return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other){
    return (this->toFloat() / other.toFloat());
}

// Post/Pre Incre/Decrements
Fixed& Fixed::operator++(){
    this->x += 1;
    return *this;
}

Fixed& Fixed::operator--(){
    this->x -= 1;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed temp(*this);

    this->x += 1;
    return temp;
}

Fixed Fixed::operator--(int){
    Fixed temp(*this);

    this->x -= 1;
    return temp;
}

// Min/Max Functions
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return (a);
    return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}