#ifndef DOG_HPP
#define DOG_HPP

#include "XAnimal.hpp"
#include "Brain.hpp"


class Dog: public XAnimal {
    private:
        Brain *Br;
    public:
        Dog();
        Dog(const Dog& other);
        Dog& operator=(const Dog& other);
        ~Dog();

        void makesound() const;
};

#endif