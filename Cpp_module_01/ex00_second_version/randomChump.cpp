#include "Zombie.hpp"
#include "Zombie.h"

void    randomChump(std::string name) {
    Zombie* zombieCreated;
    zombieCreated = newZombie(name);
    zombieCreated->announce();
    delete (zombieCreated);
}