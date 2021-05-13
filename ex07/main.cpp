#include <iostream>
#include <string>
#include <fstream>

void	replace_strings(std::string s1, std::string s2, std::ifstream &in, std::ofstream &out) {
	std::string	line;
	size_t		found = 0;

	while (std::getline(in, line)) {
		std::cout << line << std::endl;
		found = 0;
		while (true) {
			found = line.find(s1, found);
			if (found != std::string::npos) {
				line.replace(found, s1.length(), s2);
				found += s2.length();
			}
			else
				break;
		}
		std::cout << line << std::endl << std::endl;
		out << line << "\n";
	}
}

int main(int argc, char const *argv[])
{
	std::ifstream	in_file;
	std::ofstream	out_file;

	if (argc == 4) {
		std::string	filename = argv[1];
		std::string	s1 = argv[2];
		std::string	s2 = argv[3];

		if (s1.empty() || s2.empty()) {
			std::cout << "Error: One of the strings is empty. Read subject!" << std::endl;
			return 0;
		}
		in_file.open(filename);
		if (!in_file) {
			std::cout << "Error: No such file '" << filename << "' exists" << std::endl;
			return 0;
		}
		out_file.open(filename + ".replace");

		replace_strings(s1, s2, in_file, out_file);

		in_file.close();
		out_file.close();
	}
	else {
		std::cout << "Error: not enough arguments" << std::endl;
	}
	return 0;
}
