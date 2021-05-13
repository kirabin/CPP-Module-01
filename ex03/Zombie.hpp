#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>
# include <cstdlib>

class Zombie {

	public:
		Zombie();
		Zombie(int type, std::string name);

		void	announce();
		void	randomize();

	private:
		int			_type;
		std::string	_name;
};

#endif
