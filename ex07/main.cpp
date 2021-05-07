#include <iostream>
#include <string>
#include <fstream>

using std::ifstream;
using std::ofstream;
using std::string;
using std::cout;
using std::endl;

void	replace_strings(string s1, string s2, ifstream &in, ofstream &out) {
	string	line;
	size_t	found;

	while (getline(in, line)) {
		cout << line << endl;
		while (true) {
			found = line.find(s1);
			if (found != string::npos)  // TODO: string as a namespace?
				line.replace(found, s1.length(), s2);
			else
				break;
		}
		cout << line << endl << endl;
		out << line << "\n";
	}
}

int main(int argc, char const *argv[])
{
	ifstream	in_file;
	ofstream	out_file;

	if (argc == 4) {
		string	filename = argv[1];
		string	s1 = argv[2];
		string	s2 = argv[3];

		in_file.open(filename);
		out_file.open(filename + ".replace");

		replace_strings(s1, s2, in_file, out_file);

		in_file.close();
		out_file.close();
	}
	return 0;
}
