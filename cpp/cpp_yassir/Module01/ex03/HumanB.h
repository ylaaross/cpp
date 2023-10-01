
#ifndef HUMANB_H   // Check if FILE_H is not defined
#define HUMANB_H




class HumanB
{
private:
    std::string name;
    Weapon  weapon;
public:
    void setWeapon(Weapon weapon);
    HumanB(std::string name);
    void attack();
};

#endif 