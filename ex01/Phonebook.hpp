#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include "Contact.hpp"
#include "PhonebookUtilities.hpp"

class Phonebook
{
    private:
        Contact contacts[8];
        int     index;

    public:
        Phonebook(void);
        ~Phonebook(void);
        void    add(void);
        void    search(void);
        void    displaySpecificContact(Contact contact);
        /* getter */
        Contact get_contact(int index);
};

#endif