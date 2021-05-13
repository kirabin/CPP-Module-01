#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP
# include <string>
# include <ctime>
# include <cstdlib>
# include "Zombie.hpp"

class ZombieEvent {

	public:
		ZombieEvent();

		void	setZombieType(int type);
		Zombie*	randomChump();
		Zombie*	newZombie(std::string name);

	private:
		int		_type;
};

#endif
