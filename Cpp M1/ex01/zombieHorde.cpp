#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if (N < 0)
        return NULL;
    Zombie *Z = new Zombie[N];
    for (int x = 0; x < N; x++)
        Z[x].nameSet(name);
    return (Z);
}