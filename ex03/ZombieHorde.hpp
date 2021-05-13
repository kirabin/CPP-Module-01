#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP
# include <string>
# include <ctime>
# include <cstdlib>
# include <iostream>
# include "Zombie.hpp"

class ZombieHorde {

	public:
		ZombieHorde(int n);
		~ZombieHorde();

		void	announce();

	private:
		int		_n;
		Zombie*	_zombies;
};

#endif
