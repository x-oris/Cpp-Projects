#include "Zombie.hpp"

Zombie::Zombie(){
    // Constructor
}

Zombie::~Zombie(){
    // Deconstructor
}

Zombie *Zombie::zombieHorde(int N, std::string name){
    Zombie *Z = new Zombie[N];
    for (int x = 0; x < N; x++){
        Z[x].name = name;
    }
    return (Z);
}

void    Zombie::announce(void){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
