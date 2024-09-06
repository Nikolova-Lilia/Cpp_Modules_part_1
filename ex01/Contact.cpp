#include "Contact.hpp"
/*Constructor*/
Contact::Contact(void) {}

/*Destructor*/
Contact::~Contact(void) {}

/*Getter functions*/
std::string Contact::get_firstName(void) const {
    return (this->firstName);
}

std::string Contact::get_lastName(void) const {
    return (this->lastName);
}

std::string Contact::get_nickname(void) const {
    return (this->nickname);
}

std::string Contact::get_phoneNumber(void) const {
    return (this->phoneNumber);
}

std::string Contact::get_darkestSecret(void) const {
    return (this->darkestSecret);
}

/*Setter functions*/
void    Contact::set_firstName(std::string str) {
    this->firstName = str;
}

void    Contact::set_lastName(std::string str) {
    this->lastName = str;
}

void    Contact::set_nickname(std::string str) {
    this->nickname = str;
}

void    Contact::set_phoneNumber(std::string str) {
    this->phoneNumber = str;
}

void    Contact::set_darkestSecret(std::string str) {
    this->darkestSecret = str;
}
