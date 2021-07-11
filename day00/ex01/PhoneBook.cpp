#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{   
}

PhoneBook::~PhoneBook(void)
{
}

void    PhoneBook::addContact(void)
{
    int i;

    if (this->contactCount >= MAX_CONTACT_COUNT)
    {
        std::cout << "Phone Book is full, can't add a new contact" << std::endl;
        return ;
    }
    i = this->contactCount;
    this->contactCount++;
    std::cout << "Enter First Name : ";
    std::cin >> this->contacts[i].firstName;
    std::cout << "Enter Last Name : ";
    std::cin >> this->contacts[i].lastName;
    std::cout << "Enter Nickname : ";
    std::cin >> this->contacts[i].nickname;
    std::cout << "Enter Phone Number : ";
    std::cin >> this->contacts[i].phoneNumber;
    std::cout << "Enter Darkest Secret : ";
    std::cin >> this->contacts[i].darkestSecret;
    this->contacts[i].isSet = 1;
}

void    PhoneBook::searchContact(void)
{
    for (int i = 0; i < this->contactCount; i++)
    {
        this->contacts[i].print(i);
    }
}