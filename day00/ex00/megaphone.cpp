#include <iostream>
#include <string>

std::string	to_upper(std::string str)
{
	for (unsigned int i = 0; i < str.size(); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}

int main(int argc, char **argv)
{
	std::string sentence = "";

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	sentence = argv[1];
	for (int i = 2; i < argc; i++)
	{
		sentence += " ";
		sentence += argv[i];
	}
	std::cout << to_upper(sentence) << std::endl;
}
