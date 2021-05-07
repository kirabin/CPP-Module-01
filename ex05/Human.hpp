#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

class Human {

	public:
		string			identify() const;
		const Brain&	getBrain() const;

	private:
		const Brain		brain;
};

#endif
