#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() {
	this->type = 0;
}


Zombie*	ZombieEvent::newZombie(std::string name) {
	Zombie*	zombie = new Zombie(this->type, name);

	return zombie;
}

Zombie*	ZombieEvent::randomChump() {
	string	names[5] = {"Bomber", "Villager", "Rusher", "Fighter", "Benjamin"};
	int		randInt;
	int		randType;

	srand (time(NULL));
	randInt = rand() % 5;
	randType = rand() % 13 % 5;
	Zombie*	zombie = new Zombie(randType, names[randInt]);
	zombie->announce();
	return zombie;
}

void	ZombieEvent::setZombieType(int type) {
	this->type = type;
}
