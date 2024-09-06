#include "Phonebook.hpp"
#include "PhonebookUtilities.hpp"

/*Constructor*/
Phonebook::Phonebook(void) {
    this->index = 0;
    std::cout << "Welcome to Crappy Awesome phonebook! Created am empty phonebook for up to 8 contacts"
            << std::endl;
}

/*Destructer*/
Phonebook::~Phonebook(void) {
    std::cout << "See ya!" << std::endl;
}

/*  ADD: save a new contact
    Promped to input the information of the new contact one field at a time. 
    Contact fields: first name, last name, nickname, phone number, darkest secret.
    A saved contact can't have empty fields.*/
void Phonebook::add(void) {
    std::string str;

    if (this->index > 7)
        std::cout << "Warning: overwriting info about " 
                << this->contacts[this->index % 8].get_firstName()
                << std::endl;
    while (!std::cin.eof())
    {
        std::cout << "Enter a first name: ";
        if (std::getline(std::cin, str) && str != "")
        {
            this->contacts[this->index % 8].set_firstName(str);
            break;
        }
    }
    while (!std::cin.eof())
    {
        std::cout << "Enter " 
                << this->contacts[this->index % 8].get_firstName()
                << "'s last name: ";
        if (std::getline(std::cin, str) && str != "")
        {
            this->contacts[this-> index % 8].set_lastName(str);
            break;
        }
    }
    while (!std::cin.eof())
    {
        std::cout << "Enter " << this->contacts[this->index % 8].get_firstName()
                << "'s nickname: ";
        if (std::getline(std::cin,str) && str != "")
        {
            this->contacts[this->index % 8].set_nickname(str);
            break;
        }
    }
    while (!std::cin.eof())
    {
        std::cout << "Enter " << this->contacts[this->index % 8].get_firstName()
                << "'s phone number: ";
        if (std::getline(std::cin, str) && str != "")
        {
            this->contacts[this->index % 8].set_phoneNumber(str);
            break;
        }
    }
    while (!std::cin.eof())
    {
        std::cout << "Enter " << this-> contacts[this->index % 8].get_firstName()
                << "'s darkest secret: ";
        if (std::getline(std::cin, str) && str != "")
        {
            this->contacts[this->index % 8].set_darkestSecret(str);
            std::cout << this->contacts[this->index % 8].get_firstName() 
                    << " successfully added to phonebook [" << this->index % 8 + 1 << "/8]"
                    << std::endl;
            break;
        }
    }
    this->index++;
}
/*  Display everything for a certain contact    */
void Phonebook::displaySpecificContact(Contact contact) {
    std::cout << std::endl << "Requesting contact information..." << std::endl;
    if (!contact.get_firstName().size())
    {
        std::cout << "Failed to get info for this contact" << std::endl;
        return;
    }
    std::cout << "First Name: " << contact.get_firstName() << std::endl;
    std::cout << "Last Name: " << contact.get_lastName() << std::endl;
    std::cout << "Nickname: " << contact.get_nickname() << std::endl;
    std::cout << "Phone Number: " << contact.get_phoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.get_darkestSecret() << std::endl;
}

Contact Phonebook::get_contact(int index) {
    return (this->contacts[index % 8]);
}

/*  Search: display a specific contact
    Display the saved contacts as a list of 4 columns: index, first name, last name and nickname.
    Each Column must be 10 characters. A pipe character ('|') separates them. The text must be right-aligned.
    If the text is longer than the column, it must be truncated and the last displayable character replaced by dot.('.')
    Prompt the user again for index, if it's out of range or wrong, define a relevant behavior.
    Otherwise display the contact information one field per line.*/
void    Phonebook::search(void) {
    std::string str;

    if (!displayContacts(this->contacts))
    {
        std::cout << std::endl << "Phonebook is empty!" << std::endl;
        return ;
    }
    while (!std::cin.eof())
    {
        std::cout << "Select an index: ";
        if (std::getline(std::cin, str) && str != "")
        {
            if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' && this->contacts[str[0] - 1 - '0'].get_firstName().size())
            break;
        }
        if (str != "")
            std::cout << "Invalid index!" << std::endl;
    }
    if (!std::cin.eof())
        this->displaySpecificContact(this->contacts[str[0] - 1 -'0']);
}
