#include "Weapon.h"
#include "HumanB.h"

HumanB::HumanB(std::string name)
{
    this->name = name;     
}

void HumanB::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}