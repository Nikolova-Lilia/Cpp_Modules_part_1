#include "ClapTrap.hpp"

int main(void)
{
    std::cout << "Testing ClapTrap\n";
    {
        std::cout << "Constructing\n";
        ClapTrap a;
        ClapTrap b("Prayer2");

        std::cout << "Testing\n";
        a.attack("first target robot");
        a.takeDamage(1); // 10 - 1 = 9
        a.beRepaired(1); // 9 + 1 = 10
        a.takeDamage(5); // 10 - 5 = 5
        a.beRepaired(6); // 5 + 6 = error
        a.takeDamage(10); // 5 - 10 = 0
        a.takeDamage(10); // 0 - 10 = error
        a.beRepaired(5); // error
        a.attack("second target robot"); // error
        b.beRepaired(3); // error full hit point
        for (int i = 0; i < 12; i++)
            b.attack("Player1-clone");
        b.beRepaired(3); // error full hit points
        std::cout << "Destructing\n"; 
    }
    return (0);
}