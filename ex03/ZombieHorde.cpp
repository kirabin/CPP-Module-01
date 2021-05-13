#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : _n(n), _zombies(NULL) {
	std::cout << "ZombieHorde created" << std::endl;

	if (n > 0) {
		this->_zombies = new Zombie[n];
		std::cout << "Zombies created" << std::endl;

		for (int i = 0; i < n; i++) {
			this->_zombies[i].randomize();
		}
	}
	else {
		std::cout << "0 Zombie Horde" << std::endl;
	}
}

void	ZombieHorde::announce() {
	for (int i = 0; i < this->_n; i++) {
		this->_zombies[i].announce();
	}
}

ZombieHorde::~ZombieHorde() {
	if (this->_n > 0) {
		std::cout << "Destroying Zombies" << std::endl;
		delete [] this->_zombies;
	}
	std::cout << "Destroying ZombieHorde" << std::endl;
}
