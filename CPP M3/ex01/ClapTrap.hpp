#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string Name;
        unsigned int hitPts;
        unsigned int engPts;
        unsigned int attDmg;
    public:
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        virtual ~ClapTrap();
        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        //Setters && Getters
        std::string getName() const;
        int gethitPts() const;
        int getengPts() const;
        int getattDmg() const;

        void setName(std::string name);
        void sethitPts(unsigned int hitPts);
        void setengPts(unsigned int engPts);
        void setattDmg(unsigned int attDmg);
};

#endif