#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# define MAX_CONTACT_COUNT 8
class PhoneBook
{
    private:
        Contact contacts[MAX_CONTACT_COUNT];
        int     contactCount = 0;
    
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void    searchContact(void);
        void    addContact(void);
        void    removeContact(void);
};

#endif