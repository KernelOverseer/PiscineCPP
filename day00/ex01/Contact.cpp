#include "Contact.hpp"

Contact::Contact(void)
{
	this->isSet = 0;
}

Contact::~Contact(void)
{
}

std::string Contact::format(std::string s)
{
	if (s.size() > 10)
	{
		s = s.substr(0, 10);
		s[9] = '.';
	}
	return (s);
}

void Contact::print(int index)
{
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << this->format(this->firstName) << "|";
	std::cout << std::setw(10) << this->format(this->lastName) << "|";
	std::cout << std::setw(10) << this->format(this->nickname) << "|";
	std::cout << std::endl;
}

void Contact::print_details(void)
{
	std::cout << "First Name : " << this->firstName << std::endl;
	std::cout << "Last Name : " << this->lastName << std::endl;
	std::cout << "Nickname : " << this->nickname << std::endl;
	std::cout << "phone Number : " << this->phoneNumber << std::endl;
	std::cout << "darkest Secret : " << this->darkestSecret << std::endl;
}
