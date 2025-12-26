#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *animals[SIZE]; // why with no pointer it did not work ? remove it to test.

    std::cout << "--- Filling First Half With Dog Objects ---" << std::endl;
    for (int x = 0; x < SIZE / 2; x++)
        animals[x] = new Dog();
    std::cout << "--- Filling Second Half With Cat Objects ---" << std::endl;
    for (int x = SIZE / 2; x < SIZE; x++)
        animals[x] = new Cat();
    std::cout << "------------ Deletion Of Objects -----------" << std::endl;
    for (int x = 0; x < SIZE; x++)
        delete animals[x];

    std::cout << "----- Testing If The Copying Is Deep Or Shallow -----" << std::endl;
    Dog basic;
    {
        Dog tmp = basic;
    }
    return 0;
}