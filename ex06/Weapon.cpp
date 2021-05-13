#include "Weapon.hpp"

Weapon::Weapon() : _type(std::string()) {}

Weapon::Weapon(std::string type) {
	this->_type = type;
}

const std::string&	Weapon::getType() const {
	const std::string& type = this->_type;

	return type;
}

void				Weapon::setType(std::string new_type) {
	this->_type = new_type;
}
