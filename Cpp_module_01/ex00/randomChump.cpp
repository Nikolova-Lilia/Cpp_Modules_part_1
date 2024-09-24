#include "Zombie.hpp"

void    randomChump(std::string name) {
    Zombie zombieCreated = Zombie(name);
    zombieCreated.announce();
}