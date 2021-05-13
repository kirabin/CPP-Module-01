#ifndef HUMAN_HPP
# define HUMAN_HPP
# include <string>
# include "Brain.hpp"

class Human {

	public:
		Human();
		std::string identify() const;
		const Brain& getBrain() const;

	private:
		const Brain _brain;
};

#endif
