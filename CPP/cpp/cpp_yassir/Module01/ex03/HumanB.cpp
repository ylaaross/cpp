#include "Weapon.h"
#include "HumanB.h"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon=NULL;  
}

void HumanB::setWeapon(Weapon *weapon)
{
    this->weapon = weapon;
  
}
void HumanB::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << "\n";
}