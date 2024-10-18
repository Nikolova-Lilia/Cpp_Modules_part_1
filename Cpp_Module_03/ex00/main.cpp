#include "ClapTrap.hpp"

int main(void)
{
    std::cout << "Testing ClapTrap\n";
    {
        std::cout << "Constructing\n";
        ClapTrap a;
        ClapTrap b("Prayer1");

        std::cout << "Testing\n";
        a.attack("first target robot");
        a.takeDamage(10);
        a.takeDamage(10);
        a.beRepaired(5);
        a.attack("second target robot");
        b.beRepaired(3);
        for (int i = 0; i < 3; i++)
            b.attack("Player1-clone");
        b.beRepaired(3);
        std::cout << "Destructing\n"; 
    }
    return (0);
}