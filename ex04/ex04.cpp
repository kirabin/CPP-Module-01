#include <string>
#include <iostream>


using std::string;
using std::cout;
using std::endl;

int main()
{
	string	brain = "HI THIS IS BRAIN";
	string*	brain_pointer = &brain;
	string&	brain_reference = brain;

	// cout << "string         : " << brain << endl;
	cout << "string pointer : " << *brain_pointer << endl;
	cout << "string referece: " << brain_reference << endl;

	// brain = "Hi this is Brian";
	// cout << "string         : " << brain << endl;
	// cout << "string pointer : " << *brain_pointer << endl;
	// cout << "string referece: " << brain_reference << endl;
	return 0;
}
