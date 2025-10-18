#include "Weapon.hpp"

int main()
{
    Weapon club = Weapon("AK47");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("M4");
    bob.attack();

    Weapon club2 = Weapon("Desert Eagle");
    HumanB jim("Jim");
    jim.setWeapon(club2);
    jim.attack();
    club2.setType("44 Magnum");
    jim.attack();

    return 0;
}