#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "TESTING CLAPTRAP\n";
    {
        std::cout << BOLDMAGENTA << "Constructing:\n" << RESET;
        ClapTrap a;
        ClapTrap b("42Prague");

        std::cout << BOLDMAGENTA << "Testing:\n" << RESET;
        a.attack("42Madrid");
        a.takeDamage(1); //10 - 1 = 9
        a.beRepaired(1); //9 + 1 = 10
        a.takeDamage(5); //10 - 5 = 5;
        a.beRepaired(6); // 5 + 6 = error
        a.takeDamage(10); //5 - 10 = 0
        a.takeDamage(10); //0 - 10 = error
        a.beRepaired(5); // error
        a.attack("42Prague"); // error
        b.beRepaired(3); // error full hit point
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
        ScavTrap d("42Milano");

        std::cout << BOLDCYAN << "Testing:\n" << RESET;
        c.attack("42Adelaide");
        // for (int i = 0; i < 50; i++)
        //  c.attack("42-Tokyo");
        c.beRepaired(22);
        c.takeDamage(21);
        c.beRepaired(22);
        c.guardGate();
        c.guardGate();
        d.attack("42Milano-Clone");
        d.takeDamage(101);
        d.takeDamage(15);
        d.attack("42Adelaide-Clone");
        std::cout << BOLDCYAN << "Destructing\n" << RESET;
    }
}