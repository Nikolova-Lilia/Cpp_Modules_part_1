#include "FragTrap.hpp"

//Constructors
FragTrap::FragTrap(void):ClapTrap()
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap Default Constructor called\n";
}
FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap Constructor for the name " << this->name << " called\n";
}
//Destructor
FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap Destructor for " << this->name << " called\n";
}
//Overloaded Operators
FragTrap &FragTrap::operator=(const FragTrap &src)
{
    std::cout << "FragTrap Assignment operator called\n";
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return (*this);
}
//Public Methods
void    FragTrap::highFivesGuys(void)
{
    std::cout << BOLDLIGHTBLUE << "FragTrap " << this->name << ": High Five guys!\n" << RESET;
}