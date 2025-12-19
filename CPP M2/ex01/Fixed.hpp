#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int x;
        static const int fract = 8;
    public:
        Fixed();
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
        ~Fixed();
        // All these added member need to be checked and verified.
        Fixed(const int);
        Fixed(const float);
        int toInt(void) const;
        float toFloat(void) const;
        // Need to add the overload of << insertion operator.
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif