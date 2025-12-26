#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain Constructor" << std::endl;
    for (int x = 0; x < 100; x++)
        ideas[x] = "";
}

Brain::Brain(const Brain& other){
    std::cout << "Brain Copy Constructor" << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other){
    std::cout << "Brain Assignment Operator" << std::endl;
    if (this != &other){
        for (int x = 0; x < 100; x++)
            this->ideas[x] = other.ideas[x];
    }
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain Deconstructor Called" << std::endl;
}