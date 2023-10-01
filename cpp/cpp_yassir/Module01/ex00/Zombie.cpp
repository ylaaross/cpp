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
