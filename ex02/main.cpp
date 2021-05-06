#include "Zombie.hpp"
#include "ZombieEvent.hpp"


// TODO: difference between
//			Zombie zombie;
//			Zombie zombie = Zombie();

// clang++ Zombie.cpp main.cpp ZombieEvent.cpp
int main()
{
	ZombieEvent	zombieEvent;
	Zombie	stack_zombie = Zombie(3, "Stacky");
	Zombie* zombie;

	stack_zombie.announce();
	zombie = zombieEvent.newZombie("Sage");
	zombie->announce();
	delete zombie;
	zombieEvent.setZombieType(2);
	zombie = zombieEvent.newZombie("Sally");
	zombie->announce();
	delete zombie;
	zombie = zombieEvent.randomChump();
	delete zombie;
	return 0;
}
