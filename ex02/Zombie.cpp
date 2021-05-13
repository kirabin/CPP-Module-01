#include "Zombie.hpp"

Zombie::Zombie() : _type(0), _name(std::string()) {}

Zombie::Zombie(int type, std::string name) : _type(type), _name(name) {}

void	Zombie::announce() {
	std::cout << "<" << this->_name << "(" << this->_type
		<<")> Braiiiiiiinnnssss..." << std::endl;
}
