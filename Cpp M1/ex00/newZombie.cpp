#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name){
    Zombie *Z = new Zombie(name);
    return Z;
}
