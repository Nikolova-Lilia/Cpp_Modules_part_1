#ifndef ZOMBIE_H

# define ZOMBIE_H

#include "Zombie.hpp"
/* Returns a pointer to Zombie object allocated with new */
Zombie* newZombie(std::string name);

/* Creates a new Zombie stored on the heap, which announces itself */
void    randomChump(std::string name);

#endif