#include <iostream>

/*
    This code is to highlight the ambiguity arising from two standard conversion at the phase
    of Overloading Resolution.
    The compiler cannot decide which one of the adHocFunc to call since both requires standard resolution.
*/

class adHoc
{
    private:
        int x;
    public:
        int adHocFunc(double x);
        int adHocFunc(long x);
};

int adHoc::adHocFunc(double x){
    return (x * 11);
}

int adHoc::adHocFunc(long x){
    return (x * 11);
}

int main()
{
    adHoc test;
    // std::cout << test.adHocFunc(10) << std::endl; Enable this instruction and compile.
}