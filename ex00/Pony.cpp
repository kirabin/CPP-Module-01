#include "Pony.hpp"

Pony::Pony(string name, int age) {
	this->name = name;
	this->age = age;
	this->_legs = 4;
	this->color = 0x443322;
	cout << "Pony named " << this->name << " was born" << endl;
}

Pony::~Pony() {
	cout << "Pony named " << this->name << " died" << endl;
}
