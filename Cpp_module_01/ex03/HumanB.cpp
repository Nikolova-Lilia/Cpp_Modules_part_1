#include "HumanB.hpp"
/* Constructor */
HumanB::HumanB(std::string name): weapon(NULL) {
    this->name = name;
    std::cout << "HumanB " << name << " created with no weapon" << std::endl;
}
/* Destructor */
HumanB::~HumanB(void) {
    std::cout << "HumanB " << this->name << " destroyed" << std::endl;
}
/* Attack function */
void    HumanB::attack(void) {
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}
/* Setter function */
void    HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}