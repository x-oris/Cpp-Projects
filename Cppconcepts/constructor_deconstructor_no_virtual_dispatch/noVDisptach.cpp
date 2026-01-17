#include <iostream>

/*
    In this code, we have two classes, one as Base and the other as the Derived that inherits from the first one,
    as you can see the base class, has a virtual function, and its been called in the constructor.
    The derived class overwites the Vptr to point to the Vtable of the dervied class once being fully contsructed, triggering subtype polymorphism.
    yet no virtual dispatch happens, as you can see if you run the code, once the contructor of the animal class runs, the method of the base class
    runs.
    This happens because object is still at the base class construction, it still did not reach the final object construction.
*/

class Animal
{
    public:
        Animal(){
            speak();
            std::cout << "Base Animal Constructor Called..." << std::endl;
        }
        virtual void speak(void){
            std::cout << "Animal Voice Called..." << std::endl;
        }
        virtual ~Animal(){
            std::cout << "Base Animal Destructor Called..." << std::endl;
            speak();
            // Once the Derived is destructed, the vptr is updated to point to the animal vtable.
            // If not, and the vptr is still pointing to the derived vtable, it would cause a segfault since we are accesing a freed table.
        }
};

class Dog: public Animal
{
    public:
        Dog(){
            std::cout << "Dog Derived Constructor Called..." << std::endl;
        }
        void speak(void){
            std::cout << "Dog Voice Called..." << std::endl;
        }
        ~Dog(){
            std::cout << "Dog Derived Destructor Called..." << std::endl;
        }
};

int main()
{
    Animal *x = new Dog();

    // Calling speak again after the Dog object is fully constructed.
    x->speak();
    delete x;
}