#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

using std::string;
using std::cout;
using std::endl;

class HumanA {

	public:
		HumanA(const string name, Weapon &weapon); // TODO: passing reference to function, dive deep
		void	attack();

	private:
		const Weapon&	_weapon;
		string	_name;
};

#endif
