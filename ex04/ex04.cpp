#include <string>
#include <iostream>

int main()
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string*	brain_pointer = &brain;
	std::string&	brain_reference = brain;

	std::cout << "string pointer : " << *brain_pointer  << std::endl;
	std::cout << "string referece: " << brain_reference << std::endl;
	return 0;
}
