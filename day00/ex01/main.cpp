#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
    int quit = 0;
    PhoneBook   book;
    std::string command;

    while (!quit)
    {
        std::cout << "PhoneBook $> ";
        if (!(std::cin >> command))
            quit = 1;
        if (command == "EXIT")
            quit = 1;
        else if (command == "ADD")
            book.addContact();
        else if (command == "SEARCH")
            book.searchContact();
    }
    return (0);
}