#include "Human.hpp"

const Brain&	Human::getBrain() const {
	const Brain&	brain_ref = this->brain;
	return brain_ref;
}

string			Human::identify() const {
	return this->brain.identify();
}
