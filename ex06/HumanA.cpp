#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(const std::string name, Weapon& weapon) : _weapon(weapon) {
	this->_name = name;
}

void	HumanA::attack() {
	std::cout << this->_name << " attacks using " << this->_weapon.getType() << std::endl;
}
