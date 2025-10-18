#include "Zombie.hpp"

int main()
{
    int N = 10;
    Zombie *Z = Zombie::zombieHorde(N, "Zombiess");
    for (int i = 0; i < N; i++){
        Z[i].announce();
    }
    delete[] Z;
}