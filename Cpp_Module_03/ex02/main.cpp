#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "TESTING CLAPTRAP\n";
    {
        std::cout << BOLDMAGENTA << "Constructing:\n" << RESET;
        ClapTrap a;
        ClapTrap b("42Prague");

        std::cout << BOLDMAGENTA << "Testing:\n" << RESET;
        a.attack("42Tokyo");
        a.takeDamage(10);
        a.takeDamage(10);
        a.beRepaired(5);
        a.attack("42Paris");
        b.beRepaired(3);
        for (int i = 0; i < 12; i++)
            b.attack("42Prague-Clone");
        b.beRepaired(3);
        std::cout << BOLDMAGENTA << "Destructing\n" << RESET;
    }
    std::cout << std::endl;
    std::cout << "TESTING SCAVTRAP\n";
    {
        std::cout << BOLDCYAN << "Constructing:\n" << RESET;
        ScavTrap c;
        ScavTrap d("42Vienna");

        std::cout << BOLDCYAN << "Testing:\n" << RESET;
        c.attack("42Malaga");
        // for (int i = 0; i < 50; i++)
        // c.attack("42London")
        c.beRepaired(22);
        c.takeDamage(21);
        c.beRepaired(22);
        c.guardGate();
        c.guardGate();
        d.attack("42Vienna-Clone");
        d.takeDamage(101);
        d.takeDamage(15);
        d.attack("42Maalaga-Clone");
        std::cout << BOLDCYAN << "Destructing\n" << RESET;
    }
    std::cout << std::endl;
    std::cout << "TESTING FRAGTRAP\n";
    {
        std::cout << BOLDYELLOW << "Constructing:\n" << RESET;
        FragTrap e;
        FragTrap f("42Berlin");

        std::cout << BOLDYELLOW << "Testing:\n" << RESET;
        e.highFivesGuys();
        e.attack("42Barcelona");
        e.takeDamage(101);
        e.takeDamage(1);
        e.attack("42Barcelona");
        f.highFivesGuys();
        // for (int i = 0; i < 101; i++)
        // f.attack("FragTrap-Clone");
        std::cout << BOLDYELLOW << "Destructing:\n" << RESET;
    }
    return (0);
}