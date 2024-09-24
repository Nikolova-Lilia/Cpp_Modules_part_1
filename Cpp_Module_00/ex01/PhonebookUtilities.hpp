#ifndef PHONEBOOKUTILITIES_HPP

#define PHONEBOOKUTILITIES_HPP

#include <iostream>
#include "Contact.hpp"

//returns the string with n spaces
std::string addSpaces(int n);

//corrects if the length of the string is longer than 10 char and adds dot.
std::string fixWidth(std::string str);

//Display the saved contacts
int displayContacts(Contact contact[8]);

#endif