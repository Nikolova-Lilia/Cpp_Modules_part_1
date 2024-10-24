#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# define RESET "\033[0m"
# define BOLDRED "\033[1m\033[31m" //Bold Red
# define BOLDGREEN "\033[1m\033[32m" //Bold Green
# define BOLDMAGENTA "\033[1m\033[35m" //Bold Magenta
# define BOLDCYAN "\033[1m\033[36m" //Bold Cyan
# define BOLDYELLOW "\033[1m\033[33m" //Bold Yellow
# define BOLDLIGHTBLUE "\033[1m\033[94m" // Bold Light Blue
#include <iostream>
#include <string>

class   ClapTrap
{
    protected:
        std::string     name;
        unsigned int    hitPoints;
        unsigned int    energyPoints;
        unsigned int    attackDamage;
    public:
        //Constructor
        ClapTrap(void);
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &copy);

        //Assignment Operator
        ClapTrap &operator=(const ClapTrap &src);

        //Destructor
        virtual ~ClapTrap(void);

        //Public member functions
        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif