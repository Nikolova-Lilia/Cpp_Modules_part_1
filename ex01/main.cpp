#include <iostream>
#include "Phonebook.hpp"
#include <cstring>

int main(void)
{
    Phonebook   ph_book;
    std::string str;

    //std::cout << "Welcome to Crappy Awesome phonebook. " << std::endl;
    while (str != "EXIT" && str != "exit")
    {
        std::cout << "Enter: add/ADD, search/SEARCH or exit/EXIT: ";
        std::getline(std::cin, str);
        if (str == "ADD" || str == "add")
        {
            ph_book.add();
        }
        else if (str == "SEARCH" || str == "search")
        {
            ph_book.search();
        }
        if (std::cin.eof())
        {
            std::cout << std::endl;
            return (0);
        }
    }
    return (0);
}