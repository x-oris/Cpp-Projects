#include "Zombie.hpp"

int main()
{
    Zombie z1("Z1");
    z1.announce();
    Zombie *z2 = Zombie::newZombie("Z2");
    z2->announce();
    delete z2;
}