#include "Brain.hpp"

string	Brain::identify() const{
	std::ostringstream address;
	address << this;
	return address.str();
}
