#include "Brain.hpp"

std::string		Brain::identify() const {
	std::ostringstream address;

	address << this;
	return address.str();
}
