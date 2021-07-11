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
	int contact_index;

	for (int i = 0; i < this->contactCount; i++)
	{
		this->contacts[i].print(i);
	}
	std::cout << "Enter contact index : ";
	if (!(std::cin >> contact_index) || contact_index < 0 ||
		contact_index >= this->contactCount)
	{
		std::cout << "Value is not a valid index" << std::endl;
		return ;
	}
	this->contacts[contact_index].print_details();
}
