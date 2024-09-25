#include "Zombie.hpp"
/*Constructor*/
Zombie::Zombie(std::string name) {
    this->name = name;
    std::cout << "Zombie object " << this->name << " created\n";
}

/*Destructor*/
Zombie::~Zombie(void) {
    std::cout << "Zombie object " << this->name << " destroyed\n";
}

/*Zombies announce themselfs*/
void    Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}