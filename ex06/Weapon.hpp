#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

using std::string;

class Weapon {

	public:
		Weapon();
		Weapon(string type);
		const string&	getType() const;
		void			setType(string new_type);

	private:
		string	_type;
};

#endif
