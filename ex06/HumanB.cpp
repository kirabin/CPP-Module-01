#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const string name) {
	this->_name = name;
}

void	HumanB::attack() {
	cout << this->_name << " attacks using " << this->_weapon->getType() << endl;
}

void	HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon; // LEARN: gets addres of original passed weapon, not weapon reference
}
