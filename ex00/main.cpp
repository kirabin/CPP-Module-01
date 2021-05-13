#include "Pony.hpp"

void	ponyOnTheStack(std::string name, int age) {
	Pony	pony(name, age);
}

Pony	*ponyOnTheHeap(std::string name, int age) {
	Pony	*pony = new Pony(name, age);
	return pony;
}

int	main()
{
	Pony	*heap_pony = ponyOnTheHeap("Stacky", 1);

	ponyOnTheStack("Heapy", 600);
	delete heap_pony;
	return 0;
}
