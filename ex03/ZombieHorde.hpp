#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP
# include <string>
# include <ctime>
# include <cstdlib>
# include "Zombie.hpp"



class ZombieHorde {

	public:
		ZombieHorde(int n);

	private:
		Zombie	*zombies = Zombie()[20];
};

#endif
