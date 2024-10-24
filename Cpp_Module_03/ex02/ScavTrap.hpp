#include "ClapTrap.hpp"

class   ScavTrap:public ClapTrap
{
    private:
        bool    guardingGate;
    public:
        //Constructors
        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &copy);
        //Assignment Operator
        ScavTrap &operator=(const ScavTrap &src);
        //Destructor
        virtual ~ScavTrap(void);
        //Public member functions
        void    attack(const std::string &target);
        void    guardGate(void);
};