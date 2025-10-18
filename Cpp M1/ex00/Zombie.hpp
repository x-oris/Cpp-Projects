#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        // Constructor
        Zombie(std::string newname);
        void announce(void);
        static Zombie* newZombie(std::string name);
        void randomChump(std::string name);
        // Deconstructor
        ~Zombie();
};

#endif