#include "ScavTrap.hpp"

// Constructor
ScavTrap::ScavTrap(void): ClapTrap() {
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->guardingGate = false;
    std::cout << "ScavTrap Default Constructor called\n";
}
// Parameterized constructor
ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    this->guardingGate = false;
    std::cout << "ScavTrap Constructor for the name " << this->name << " called\n";
}
// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy) {
    this->guardingGate = copy.guardingGate;
    std::cout << "ScavTrap Copy Constructor called\n";
}
// Assignment operator
ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
    std::cout << "ScavTrap Assignment operator called\n";
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return (*this);
}
// Destructor
ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap Destructor for " << this->name << " called\n";
}
// Public Methods
void    ScavTrap:: attack(const std::string &target) {
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << BOLDGREEN << "ScavTrap " << this->name << " attacks " << target
        << ", causing " << this->attackDamage << " points of damage!\n" << RESET;
        this->energyPoints--;
    }
    else if (this->hitPoints == 0)
    {
        std::cout << BOLDRED << "ScavTrap " << this->name << " is not able to attack "
        << target << ", because it is dead\n" << RESET;
    }
    else
    {
        std::cout << BOLDRED << "ScavTrap " << this->name << " is not able to attack "
        << target << ", because it has no energy points left\n" << RESET;
    }
}

void    ScavTrap::guardGate(void) {
    if (this->guardingGate == false)
    {
        this->guardingGate = true;
        std::cout << BOLDGREEN << "ScavTrap " << this->name
        << " is now guarding the gate\n" << RESET;
    }
    else
        std::cout << BOLDRED << this->name << " is already guarding the gate\n" << RESET;
}