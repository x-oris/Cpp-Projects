#ifndef XANIMAL_HPP
#define XANIMAL_HPP

#include <iostream>
#define SIZE 4

class XAnimal
{
    protected:
        std::string type;
    public:
        XAnimal();
        XAnimal(const XAnimal& other);
        XAnimal& operator=(const XAnimal& other);
        virtual ~XAnimal();
        void setType(std::string type);
        std::string getType() const;

        virtual void makesound() const = 0;
};

#endif