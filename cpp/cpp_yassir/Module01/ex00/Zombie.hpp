#include <iostream>
class Zombie
{
    private:
        std::string name;
    public:
        Zombie() 
        {
        }
        Zombie(std::string name)
        {
            this->name = name;
        }
        ~Zombie()
        {
            std::cout << name << " is killed by headshoot\n";
        }
        
        void announce( void );
        void randomChump( std::string name );
};
        Zombie* newZombie( std::string name );
