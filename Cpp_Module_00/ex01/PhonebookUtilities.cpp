#include "PhonebookUtilities.hpp"

//append() used to add more characters to the end of a string.
std::string addSpaces(int n) {
    std::string str;

    for (int i = 0; i < n; i++)
        str.append(" ");
    return (str);
}

//size() == strlen.
//resize() is used to change the length of a string to whatever str count needed.
std::string fixWidth(std::string str) {
    int i;
    int max;

    max = 10;
    i = str.size();
    if (i > max)
    {
        str.resize(max);
        str[max - 1] = '.';
    }
    return (str);
}

int displayContacts(Contact contacts[8]) {
    std::string str;
    int i;

    std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    for(i = 0; i < 8 && contacts[i].get_firstName().size() > 0; i++)
    {
        std::cout << "|" << addSpaces(9) << i + 1;
             str = fixWidth(contacts[i].get_firstName());

        std::cout << "|" << addSpaces(10 - str.size()) << str;
             str = fixWidth(contacts[i].get_lastName());
        
        std::cout << "|" << addSpaces(10 - str.size()) << str;
             str = fixWidth(contacts[i].get_nickname());
        
        std::cout << "|" << addSpaces(10 - str.size()) << str;
             std::cout << "|" << std::endl;
    }
    std::cout << " ___________________________________________ " << std::endl;
    return (i);
}
