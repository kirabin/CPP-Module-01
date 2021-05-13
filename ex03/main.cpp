#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
	srand (time(NULL));
	ZombieHorde* zombieHorde = new ZombieHorde(6);

	zombieHorde->announce();
	delete zombieHorde;
	return 0;
}
