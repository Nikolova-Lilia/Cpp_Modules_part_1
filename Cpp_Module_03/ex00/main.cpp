#include "ClapTrap.hpp"

int main(void)
{
    std::cout << "TESTING ClapTrap\n";
    {
        std::cout << BOLDMAGENTA << "CONSTRUCTING\n" << RESET;
        ClapTrap a;
        ClapTrap b("PLAYER1");

        std::cout << BOLDCYAN << "TESTING\n" << RESET;
        a.attack("FIRST TARGET ROBOT");
        a.takeDamage(1); // 10 - 1 = 9
        a.beRepaired(1); // 9 + 1 = 10
        a.takeDamage(5); // 10 - 5 = 5
        a.beRepaired(6); // 5 + 6 = error
        a.takeDamage(10); // 5 - 10 = 0
        a.takeDamage(10); // 0 - 10 = error
        a.beRepaired(5); // error
        a.attack("SECOND TARGET ROBOT"); // error
        b.beRepaired(3); // error full hit point
        for (int i = 0; i < 12; i++)
            b.attack("PLAYER2");
        b.beRepaired(3); // error full hit points
        std::cout << BOLDMAGENTA << "DESTRUCTING\n" << RESET; 
    }
    return (0);
}