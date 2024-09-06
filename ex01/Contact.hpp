#ifndef CONTACT_HPP

#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    private:
            std::string firstName;
            std::string lastName;
            std::string nickname;
            std::string phoneNumber;
            std::string darkestSecret;
    public:
            Contact(void);
            ~Contact(void);
            /*Getters*/
            std::string get_firstName(void) const;
            std::string get_lastName(void) const;
            std::string get_nickname(void) const;
            std::string get_phoneNumber(void) const;
            std::string get_darkestSecret(void) const;
            /*Setters*/
            void        set_firstName(std::string str);
            void        set_lastName(std::string str);
            void        set_nickname(std::string str);
            void        set_phoneNumber(std::string str);
            void        set_darkestSecret(std::string str);
};

#endif