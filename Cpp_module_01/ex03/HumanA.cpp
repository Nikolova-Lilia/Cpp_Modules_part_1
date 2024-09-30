#include "HumanA.hpp"
/* Constructor */
HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon) {
    std::cout << "HumanA " << name << " created with "
            << weapon.getType() << std::endl;
}

/* Destructor */
HumanA::~HumanA(void) {
    std::cout << "HumanA " << this->name << " destroyed" << std::endl;
}

void    HumanA::attack(void) {
    std::cout << this->name << " attacks with his "
            << this->weapon.getType() << std::endl;
}

void    HumanA::setWeapon(Weapon weapon) {
    this->weapon = weapon;
}