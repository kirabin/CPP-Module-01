#include "Brain.hpp"
#include "Human.hpp"

// clang++ main.cpp Human.cpp Brain.cpp
int main()
{
	Human bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}
