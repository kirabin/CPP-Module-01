#include "Zombie.hpp"
#include "ZombieHorde.hpp"

// TODO: Proper c++ naming
// clang++ main.cpp Zombie.cpp ZombieHorde.cpp
int main()
{
	srand (time(NULL));
	ZombieHorde* zombieHorde = new ZombieHorde(12);

	zombieHorde->announce();

	delete zombieHorde;
	return 0;
}
