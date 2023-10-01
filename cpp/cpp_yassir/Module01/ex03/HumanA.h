#ifndef HUMANA_H   // Check if FILE_H is not defined
#define HUMANA_H

#include "Weapon.h"
class HumanA{
    private:
        std::string name;
        Weapon  weapon;
    public:
        HumanA(std::string name, Weapon weapon);
        void attack();
};
#endif