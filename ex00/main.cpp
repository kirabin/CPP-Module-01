#include "Pony.hpp"

void	ponyOnTheStack(string name, int age) {
	Pony	pony = Pony(name, age);
}

Pony	*ponyOnTheHeap(string name, int age) {
	Pony	*pony = new Pony(name, age);
	return pony;
}

// clang++ -Wall -Wextra -Werror Pony.cpp main.cpp
int	main()
{
	Pony *heap_pony = ponyOnTheHeap("Stacky", 1);

	ponyOnTheStack("Heapy", 600);
	delete heap_pony;
	return 0;
}
