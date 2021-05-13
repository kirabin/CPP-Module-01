#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB {

	public:
		HumanB(const std::string name);
		void	attack();
		void	setWeapon(Weapon& weapon);

	private:
		Weapon*			_weapon;
		std::string		_name;
};

#endif
