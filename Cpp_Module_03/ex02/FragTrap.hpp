#include "ClapTrap.hpp"

class   FragTrap: public ClapTrap
{
    private:

    public:
        //Constructors
        FragTrap();
        FragTrap(const FragTrap &copy);
        FragTrap(std::string name);
        //Destructor
        virtual ~FragTrap(void);
        //Overloaded Operators
        FragTrap &operator=(const FragTrap &src);
        //Public Methods
        void highFivesGuys(void);
};