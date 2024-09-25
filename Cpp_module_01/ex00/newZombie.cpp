#include "Zombie.hpp"
/* Creates and returns Zombie stored on the heap */
Zombie* newZombie(std::string name) {
    return (new Zombie(name));
}
