#include "Zombie.hpp"
/*Constructor*/
Zombie::Zombie(void) {
    std::cout << "Zombie object created\n";
}

/*Destructor*/
Zombie::~Zombie(void) {
    std::cout << "Zombie object " << this->name << " destroyed\n";
}

/*Zombie announce themselfs*/
void    Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ...\n";
}
/* Setting the name as the variable name is private */
void    Zombie::setName(std::string name) {
    this->name = name;
}