#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent() : _type(0) {}

Zombie*	ZombieEvent::newZombie(std::string name) {
	return new Zombie(this->_type, name);
}

Zombie*	ZombieEvent::randomChump() {
	std::string	names[5] = {"Bomber", "Villager", "Rusher", "Fighter", "Benjamin"};

	Zombie*	zombie = new Zombie(rand() % 17 % 5, names[rand() % 5]);
	zombie->announce();
	return zombie;
}

void	ZombieEvent::setZombieType(int type) {
	this->_type = type;
}
