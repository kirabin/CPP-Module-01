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
		int			type;
		std::string	name;
};

#endif
