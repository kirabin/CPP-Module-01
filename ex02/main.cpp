#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent	zombieEvent;
	Zombie		stack_zombie(3, "Stacky");
	Zombie*		zombie;

	srand (time(NULL));
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
