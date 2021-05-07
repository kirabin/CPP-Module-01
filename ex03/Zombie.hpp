#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

using std::string;

class Zombie {

	public:
		Zombie();
		Zombie(int type, std::string name);

		void	announce();
		void	randomize();

	private:
		int			type;
		std::string	name;
};

#endif
