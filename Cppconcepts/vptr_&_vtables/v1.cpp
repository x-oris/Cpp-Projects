#include <iostream>

/*
    This code is highlighting the concept of Vptr, in our first class we have two integers and a void member function.
    When we print the sizeof the function we find that its made of 8 bytes, since the member function is stored in different region
    than the class, so if we have two instances of this class, both shares the same location address of the function.

    Meanwhile when we add a virtual member function, we find that the size has increased to 16 bytes, since using the virtual keyword
    on a function interduces a Pointer called Vptr, this pointer points to a Vtable holding the addresses of the functions that the compiler
    should uses as instruction calls.
*/


class v1
{

}