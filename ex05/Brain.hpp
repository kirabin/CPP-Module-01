#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <sstream>

using std::string;

class Brain {

	public:
		string	identify() const;

	private:
		string	_address;
};

#endif
