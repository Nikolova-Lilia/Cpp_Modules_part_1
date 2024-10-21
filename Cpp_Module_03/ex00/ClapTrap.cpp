#include "ClapTrap.hpp"

/*Constructor*/
ClapTrap::ClapTrap(void): name("default"), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap Default constructor called\n";
}
/*Parametarized Constructor*/
ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap Constructor for the name " << name << " called\n";
    this->name = name;
}
/*Copy Constructor*/
ClapTrap::ClapTrap(const ClapTrap &copy) {
    std::cout << "ClapTrap Copy Constructor called\n";
    *this = copy;
}
/*Overloaded Operators*/
ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
    std::cout << "ClapTrap Assignment operator called\n";
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return (*this);
}
/*Destructor*/
ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap Destructor for " << name << " called\n";
}
/*public member functions*/
void    ClapTrap::attack(const std::string& target) {
    if (this->energyPoints > 0 && this->hitPoints > 0)
    {
        std::cout << BOLDGREEN << "ClapTrap " << this->name << " attacks " << target
        << ", causing " << this->attackDamage << " points of damage!\n" << RESET;
        this->energyPoints--;
    }
    else if (this->hitPoints == 0)
    {
        std::cout << BOLDRED << "ClapTrap " << this->name << " is not able to attack "
        << target << ", because it is dead\n" << RESET;
    }
    else
    {
        std::cout << BOLDRED << "ClapTrap " << this->name << " is not able to attack "
        << target << ", because it has no energy points left\n" << RESET;
    }
}

void    ClapTrap::takeDamage(unsigned int amount) {
    if (this->hitPoints == 0)
    {
        std::cout << BOLDRED << "ClapTrap " << this->name 
        << " is already dead, stop beating it\n" << RESET;
    }
    else if (this->hitPoints > amount)
    {
        this->hitPoints -= amount;
        if (this->hitPoints == 0) {
            std::cout << BOLDGREEN << "ClapTrap " << this->name 
            << " was attacked and lost all hit points.\n" << RESET;
        }
        else
        {
            std::cout << BOLDGREEN << "ClapTrap " << this->name << " was attacked and lost "
            << amount << " hit points, he now has " << this->hitPoints << " hit points.\n" << RESET;
        }
    }
    else if (this->hitPoints <= amount && this->hitPoints > 0)
    {
        this->hitPoints = 0;
        std::cout << BOLDGREEN << "ClapTrap " << this->name 
        << " was attacked and lost all hit points.\n" << RESET;
    }
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (this->hitPoints == 0)
    {
        std::cout << BOLDRED << "ClapTrap " << this->name 
        << " is not able to repair itself, because he is dead.\n" << RESET;
    }
    else if (this->energyPoints == 0)
    {
        std::cout << BOLDRED << "ClapTrap " << this->name
        << " is not able to repair itself, because he doesn't have enough energy points.\n" << RESET;
    }
    else if (this->hitPoints > 0 && this->energyPoints > 0 && this->hitPoints + amount <= 10)
    {
        this->hitPoints += amount;
        std::cout << BOLDGREEN << "ClapTrap " << this->name << " repaired itself and gained " << amount
        << " of points, he now has " << this->hitPoints << " hit points.\n" << RESET;
        this->energyPoints--;
    }
    else
    {
        std::cout << BOLDRED << "ClapTrap " << this->name
        << " can't be repaired to have more than 10 hit points.\n" << RESET; 
    }
}
