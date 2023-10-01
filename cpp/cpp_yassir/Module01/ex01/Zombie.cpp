#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << name <<": BraiiiiiiinnnzzzZ...\n";
}

Zombie* newZombie( std::string name )
{
    return(new Zombie(name));
}
void Zombie::randomChump( std::string name )
{
    Zombie z(name);
    z.announce();
}

void Zombie::setters(std::string name)
{
    this->name = name;
}

void Zombie::getters()
{
    std::cout << this->name;
}
Zombie* zombieHorde(int N, std::string name )
{
    int i;
    Zombie* z;

    z = new Zombie[N];
    i = 0;
    while(i < N)
    {
        z[i].setters(name);
        i++;
    }
    return (z);
}


