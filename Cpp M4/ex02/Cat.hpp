#ifndef CAT_HPP
#define CAT_HPP

#include "XAnimal.hpp"
#include "Brain.hpp"

class Cat: public XAnimal {
    private:
        Brain *Br;
    public:
        Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat();

        void makesound() const;
};

#endif