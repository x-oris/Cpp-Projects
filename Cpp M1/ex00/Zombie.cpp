#include "Zombie.hpp"

void    Zombie::announce(void){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Constructor
Zombie::Zombie(std::string newname){
    name = newname;
}

// Deconstructor
Zombie::~Zombie(){
    std::cout << name << ": Deconstructed..." << std::endl;
}