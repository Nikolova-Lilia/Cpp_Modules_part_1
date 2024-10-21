#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define RESET "\033[0m"
# define BOLDRED "\033[1m\033[31m" // Bold Red
# define BOLDGREEN "\033[1m\033[32m" // Bold Green
#include <iostream>
#include <string>

class   ClapTrap
{
    private:
        std::string     name;
        unsigned int    hitPoints;
        unsigned int    energyPoints;
        unsigned int    attackDamage;
    public:
        // Constructors
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &copy);
        // Assignment Operator
        ClapTrap &operator=(const ClapTrap &src);
        // Destructor
        ~ClapTrap(void);
        // Public member functions
        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};
#endif