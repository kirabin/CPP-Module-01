#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA {

	public:
		HumanA(const std::string name, Weapon& weapon);
		void	attack();
		void	getDamage();

	private:
		const Weapon&	_weapon;
		std::string		_name;
};

#endif
