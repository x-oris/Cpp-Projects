#include "Zombie.hpp"

// Constructor
Zombie::Zombie() {}

// Deconstructor
Zombie::~Zombie() {
    // std::cout << "All data erased..." << std::endl;
}

void    Zombie::announce(void){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::nameSet(std::string name){
    this->name = name;
}