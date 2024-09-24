#include "Zombie.hpp"
#include "Zombie.h"
int main(void)
{
    Zombie *zomb;
    
    zomb = newZombie("Foo");
    zomb->announce();
    
    randomChump("Boo");
    delete zomb;
    return (0);
}