#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(const string name, Weapon &weapon) : _weapon(weapon) {
	this->_name = name;
}

void	HumanA::attack() {
	cout << this->_name << " attacks using " << this->_weapon.getType() << endl;
}
