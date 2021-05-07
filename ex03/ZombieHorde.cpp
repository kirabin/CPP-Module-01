#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
	std::cout << "ZombieHorde created" << std::endl;

	this->n = n;
	if (n > 0) {
		this->zombies = new Zombie[n];
		std::cout << "Zombies created" << std::endl;

		for (int i = 0; i < n; i++) {
			this->zombies[i].randomize();
		}
	}
	else {
		std::cout << "0 Zombie Horde";
	}
}

void	ZombieHorde::announce() {
	for (int i = 0; i < this->n; i++) {
		this->zombies[i].announce();
	}
}

ZombieHorde::~ZombieHorde() {
	std::cout << "Destroying Zombies" << std::endl;
	delete [] this->zombies;
	std::cout << "Destroying ZombieHorde" << std::endl;
}
