#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class fixedNumber
{
    private:
        int x;
        static const int fract = 0;
    public:
        fixedNumber();
        fixedNumber(const fixedNumber& other);
        fixedNumber& operator=(const fixedNumber& other);
        ~fixedNumber();
        int getRawbits(void) const;
        void setRawbits(int const raw);
};

#endif