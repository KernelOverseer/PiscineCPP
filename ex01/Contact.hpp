#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>

class Contact
{
    public:
        int isSet = 0;
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
    
    Contact(void);
    ~Contact(void);
    void print(int index);
    std::string format(std::string s);
};

#endif