#ifndef PONY_HPP
# define PONY_HPP
# include <string>
# include <iostream>

class Pony {

public:
	Pony(std::string name, int age);
	~Pony();

	std::string			name;
	int					age;
	unsigned int		color;

private:
	int					_legs;

};

#endif
