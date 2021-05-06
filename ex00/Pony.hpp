#ifndef PONY_HPP
# define PONY_HPP
# include <string>
# include <iostream>

using std::string;
using std::cout;
using std::endl;

class Pony {

public:
	Pony(string name, int age);
	~Pony();

	string			name;
	int				age;
	unsigned int	color;

private:
	int				_legs;

};

#endif
