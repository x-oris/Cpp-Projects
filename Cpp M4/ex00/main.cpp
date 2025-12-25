#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    Animal Lion;
    Lion.setType("King of the jungle");

    Dog Haskey;
    Haskey.setType("North Dog");

    Cat Chester;
    Chester.setType("Suits Cat");

    std::cout << "---------------- No Virtual Needed ----------------" << std::endl;
    Lion.makesound();
    Haskey.makesound();
    Chester.makesound();
    std::cout << "---------------- Virtual Needed v1 ----------------" << std::endl;
    const Animal *x = new Dog();
    std::cout << x->getType() << std::endl;
    const Animal *y = new Cat();
    std::cout << y->getType() << std::endl;

    x->makesound();
    y->makesound();
    std::cout << "---------------- Virtual Needed v2 ----------------" << std::endl;
    const WrongAnimal *w = new WrongCat();
    std::cout << w->getType() << std::endl;

    w->makesound();
    std::cout << "Notice that the sound made, was the Base class sound, not the derived WrongCat's sound..." << std::endl;
    std::cout << "------------------ Deconstructing -----------------" << std::endl; 
    delete w;
    delete x;
    delete y;

    return 0;
}