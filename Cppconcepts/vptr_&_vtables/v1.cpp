#include <iostream>

/*
    ** Enable the first section of the code: **
    This code is highlighting the concept of Vptr, in our first class we have two integers and a void member function.
    When we print the sizeof the function we find that its made of 8 bytes, since the member function is stored in different region
    than the class, so if we have two instances of this class, both shares the same location address of the function.

    Meanwhile when we add a virtual member function, we find that the size has increased to 16 bytes, since using the virtual keyword
    on a function interduces a Pointer called Vptr, this pointer points to a Vtable holding the addresses of the functions that the compiler
    should uses as instruction calls.

    ** Enable the second section of the code: **
    In this section we will see that a new address is intrduced once we used the virtual keyword on the member function.
    we will print the raw memory address of the class.

    Offset  Size  Content
    0       8     vptr (pointer to vtable)
    8       4     int x = 0xAAA
    12      4     int y = 0xBBB
    (ChatGPT gave me this mini table :) )
*/


class v1
{
    public:
        int x;
        int y;
        void memberFunc(void) {}
};

class v2
{
    public:
        int x = 10;
        int y = 11;
        virtual void memberFunc(void) {}
};

int main()
{
    // First Section.
    // std::cout << "Size of the first class > " << sizeof(v1) << std::endl; // This will print the size of the first class > 8 bytes.
    // std::cout << "Size of the first class > " << sizeof(v2) << std::endl; // This will print the size of the second class > 16 bytes.

    // Second Section.
    // v2 classv2;
    // long *raw = reinterpret_cast<long *>(&classv2);
    // for (int i = 0; i < 2; i++){
    //     std::cout << "Index > " << i << ")  0x" << raw[i] << std::endl;
    // } // The first address is for the Vptr, the second address is holding the 8 seperated bytes for the two integers. (x & y appear to be combined at the same address just
    // // because we read the memory using a long that reads 8 bytes)
}