#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie {

	public:
		Zombie();
		Zombie(int type, std::string name);

		void	announce();

	private:
		int			_type;
		std::string	_name;
};

#endif
