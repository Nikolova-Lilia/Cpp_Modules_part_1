#include "Zombie.hpp"
/* Creates and returns Zombie stored on the stack, which will technocally replaced the first one created*/
void    randomChump(std::string name) {
    Zombie zombieCreated = Zombie(name);
    zombieCreated.announce();
}
