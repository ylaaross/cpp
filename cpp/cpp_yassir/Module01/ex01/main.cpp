#include "Zombie.hpp"

int main()
{
    int i;

    i = 0;
    Zombie *z;
    z = zombieHorde(5,"yassir");
    
    while(i < 5)
    {
        z[i].announce();
        i++;
    }
    while(1);
}