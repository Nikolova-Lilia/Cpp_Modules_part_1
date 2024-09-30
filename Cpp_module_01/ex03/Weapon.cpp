#include "Weapon.hpp"
/*Constructor*/
Weapon::Weapon(std::string type): type(type) {}

/*Destructor*/
Weapon::~Weapon(void) {}

/* Member function that returns a const reference to type */
const   std::string&    Weapon::getType(void) {
    return (this->type);
}

/* Member function that sets type using the new one passed as parameter */
void    Weapon::setType(std::string type) {
    this->type = type;
}
