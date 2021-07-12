#include "Zombie.hpp"

Zombie::Zombie (void)
{
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie(void)
{
}

Zombie	*Zombie::newZombie(std::string name)
{
	return (new Zombie(name));
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}
