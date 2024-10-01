#include "Harl.hpp"

Harl::Harl(void) {
    std::cout << "Do you know Harl? We all do, in case you don't, Harl has appeared for you.\n";
}

Harl::~Harl(void) {
    std::cout << "Do you know Harl? We all do, in case you didn't, this was Harl for you.\n";
}

void    Harl::debug(void) {
    std::cout << "\'DEBUG\' level: I love having extra bacon" 
    << " for my 7XL- double-cheese-triple-pickle-special-ketchup burger."
    << " I really do!\n";
}

void    Harl::info(void) {
    std::cout << "\'INFO\' level: I cannot believe adding extra bacon costs more money. "
    << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void    Harl::warning(void) {
    std::cout << "\'WARNING\' level: I think I deserve to have some extra bacon for free. "
    << "I've been coming for years whereas you started working here since last month.\n";
}

void    Harl::error(void) {
    std::cout << "\'ERROR level: This is unacceptable! I want to speak to the manager now.\n";
}

void    Harl::complain(std::string level) {
    void    (Harl::*ptr_complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*ptr_complain[i])();
            break ;
        }
    }
}