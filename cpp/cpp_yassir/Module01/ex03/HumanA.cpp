#include "Weapon.h"
#include "HumanA.h"

    HumanA::HumanA(std::string name, Weapon s): eapon
    {
        this->name = name;
        this->weapon.setType(weapon.getType());
    }

    void HumanA::attack()
    {
        std::cout << name << " attacks with their " << weapon.getType() << "\n";
    }