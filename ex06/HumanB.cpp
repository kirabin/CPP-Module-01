#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const std::string name) {
	this->_name = name;
}

void	HumanB::attack() {
	std::cout << this->_name << " attacks using " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}
