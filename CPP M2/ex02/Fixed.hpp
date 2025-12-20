#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int x;
        static const int fract = 8;
    public:
        Fixed();
        Fixed(const Fixed& other);
        //////////////////////////////////////
        // Overloaded Operators
        Fixed& operator=(const Fixed& other);
        bool operator>(const Fixed& other);
        bool operator<(const Fixed& other);
        bool operator>=(const Fixed& other);
        bool operator<=(const Fixed& other);
        bool operator==(const Fixed& other);
        bool operator!=(const Fixed& other);
        int operator+(const Fixed& other);
        int operator-(const Fixed& other);
        int operator*(const Fixed& other);
        int operator/(const Fixed& other);
        // Arithmetic Operators
        Fixed& operator++();
        Fixed& operator++(int);
        Fixed& operator--();
        Fixed& operator--(int);
        ///////////////////////////////////////
        ~Fixed();
        Fixed(const int n);
        Fixed(const float n);
        int toInt(void) const;
        float toFloat(void) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

        std::ostream& operator<<(std::ostream &out, const Fixed& input);

#endif
