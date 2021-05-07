#include "Zombie.hpp"

Zombie::Zombie() : name(std::string()), type(0) {}
Zombie::Zombie(int type, std::string name) : type(type), name(name) {}

void	Zombie::announce() {
	std::cout << "<" << this->name << "(" << this->type
		<<")> Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::randomize() {
	string	names[5] = {"Bomber", "Villager", "Rusher", "Fighter", "Benjamin"};


	this->type = rand() % 13 % 5;
	this->name = names[rand() % 5];
}
