#include "Weapon.h"


Weapon::Weapon(std::string type)
{
    this->type = type;
}
std::string& Weapon::getType()
{
    return(type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}