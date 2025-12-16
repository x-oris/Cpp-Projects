#include "Zombie.hpp"

int main()
{
    Zombie z1("Z1");
    z1.announce();
    Zombie *z2 = newZombie("Z2");
    z2->announce();
    delete z2;
    randomChump("Z3");

    return 0;
}