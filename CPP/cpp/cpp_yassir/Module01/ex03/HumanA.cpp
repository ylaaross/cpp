#include "Weapon.h"
#include "HumanA.h"

    HumanA::HumanA(std::string name, Weapon &s):weapon(s)
    {
        this->name = name;
        // this->weapon.setType(s.getType());
    }

    void HumanA::attack()
    {
        std::cout << name << " attacks with their " << this->weapon.getType() << "\n";
    }