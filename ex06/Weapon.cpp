#include "Weapon.hpp"

Weapon::Weapon() : _type(string()) {}

Weapon::Weapon(string type) {
	this->_type = type;
}

const string&	Weapon::getType() const {
	const string& type = this->_type;

	return type;
}

void			Weapon::setType(string new_type) {
	this->_type = new_type;
}
