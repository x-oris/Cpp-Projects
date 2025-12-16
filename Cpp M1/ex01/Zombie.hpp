#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        // Constructor
        Zombie();
        void announce(void);
        void nameSet(std::string name);
        // Deconstructor
        ~Zombie();
};

Zombie *zombieHorde(int N, std::string name);
#endif