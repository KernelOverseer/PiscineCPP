#include "Contact.hpp"

Contact::Contact(void)
{
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