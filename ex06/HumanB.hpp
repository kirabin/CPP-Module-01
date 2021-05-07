#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

using std::string;
using std::cout;
using std::endl;

class HumanB {

	public:
		HumanB(const string name); // TODO: passing reference to function, dive deep
		void	attack();
		void	setWeapon(Weapon& weapon);

	private:
		Weapon*	_weapon;
		string	_name;
};

#endif
