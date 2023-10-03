#ifndef WEAPON_H   // Check if FILE_H is not defined
#define WEAPON_H

#include<iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string type);      
        void        setType(std::string type);
        void        setWeapon(std::string Weapon);
        std::string &getType();
};
#endif 