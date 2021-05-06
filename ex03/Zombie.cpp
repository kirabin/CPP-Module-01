#include "Zombie.hpp"

Zombie::Zombie() {
	this->name = std::string();
	this->type = 0;
}


Zombie::Zombie(int type, std::string name) : type(type), name(name) {
	// this->name = name;
	// this->type = type;
}

void	Zombie::announce() {
	std::cout << "<" << this->name << "(" << this->type
		<<")> Braiiiiiiinnnssss..." << std::endl;
}
