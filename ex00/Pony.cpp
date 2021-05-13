#include "Pony.hpp"

Pony::Pony(std::string name, int age) {
	this->name = name;
	this->age = age;
	this->_legs = 4;
	this->color = 0x443322;
	std::cout << "Pony named " << this->name << " was born" << std::endl;
}

Pony::~Pony() {
	std::cout << "Pony named " << this->name << " died" << std::endl;
}
