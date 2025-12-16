#include "Zombie.hpp"

int main()
{
    int N = 11;
    
    Zombie *Z = zombieHorde(N, "Zombies");
    if (!Z)
        std::cout << "Failed to allocate zombies..." << std::endl;
    for (int i = 0; i < N; i++)
        Z[i].announce();
    
    delete[] Z;
    return 0;
}