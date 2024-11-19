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
        c.attack("42Adelaide"); //20 damage
        c.takeDamage(50); //100 - 50 = 50
        c.beRepaired(20); //error, because claptrap called and not repairing above 10points
        c.takeDamage(45); //50 - 45 = 5;
        c.beRepaired(3); //5 + 3 = 8;
        c.takeDamage(100); //8 - 100 = 0 -> no more left
        c.takeDamage(10); //0 - 10 = 0 -> error, dead already
        c.beRepaired(5); // error, dead already
        c.attack("42Adelaide"); // error, can't attack dead already
        c.guardGate(); //error, already dead
        d.beRepaired(3); // error, full hit point
        for (int i = 0; i < 51; i++)
            d.attack("42Prague-Clone"); // last one - no energy left
        d.beRepaired(3); //error no energy
        d.takeDamage(2); //100 - 2 = 98
        d.guardGate(); //guarding
        d.guardGate(); //already guarding
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
        e.attack("42Barcelona"); //attack 30
        e.takeDamage(80); //100 - 80 = 20 
        e.beRepaired(10); //error, can't repair > 10
        e.takeDamage(11); //20 - 11 = 9
        e.beRepaired(1); //9 + 1 = 10
        e.takeDamage(10); //10 - 10 = 0 dies
        e.beRepaired(1); //error, already dead
        e.takeDamage(20); //error, already dead
        e.attack("42Barcelona"); //error, already dead
        e.highFivesGuys();
        f.highFivesGuys();
        for (int i = 0; i < 101; i++)
            f.attack("42Barcelona"); //last one error, already dead
        f.beRepaired(10); //error, already dead
        f.takeDamage(25); //100 - 25 = 75
        std::cout << BOLDYELLOW << "Destructing:\n" << RESET;
    }
    return (0);
}