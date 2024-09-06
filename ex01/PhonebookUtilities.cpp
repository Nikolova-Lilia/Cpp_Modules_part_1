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
std::string fixWidth(std::string str, long unsigned max) {
    int i;

    i = str.size();
    if (i > max)
    {
        str.resize(max);
        str[i - 1] = '.';
    }
    return (str);
}

int displayContacts(Contact contacts[8]) {
    char    c;
    int     i;
    std::string str;

    std::cout << " __________________________________________ " << std::endl;
    std::cout << "|     Index|First Name| Last Name| Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|---------|" << std::endl;

    c = '0';
    i = 0;

    while (++c <= '8')
    {
        if (contacts[c - 1 - '0'].get_firstName().size() && ++i)
        {
            str = c;
            str = fixWidth(str, 10);
            std::cout << "|" << addSpaces(10 - str.size()) << str;
            str = fixWidth(contacts[c - 1 - '0'].get_firstName(), 10);
            std::cout << "|" << addSpaces(1- - str.size()) << str;
            str = fixWidth(contacts[c - 1 - '0'].get_lastName(), 10);
            std::cout << "|" << addSpaces(10 - str.size()) << str;
            str = fixWidth(contacts[c - 1 - '0'].get_nickname(), 10);
            std::cout << "|" << addSpaces(10 - str.size()) << str;
            std::cout << "|" << std::endl;
        }
    }
    std::cout << " __________________________________________ " << std::endl;
    return (i);
}
