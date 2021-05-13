#include "Zombie.hpp"

Zombie::Zombie() : _type(0), _name(std::string()) {}
Zombie::Zombie(int type, std::string name) : _type(type), _name(name) {}

void	Zombie::announce() {
	std::cout << "<" << this->_name << "(" << this->_type <<")> Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::randomize() {
	std::string	names[5] = {"Bomber", "Villager", "Rusher", "Fighter", "Benjamin"};

	this->_type = rand() % 13 % 5;
	this->_name = names[rand() % 5];
}
