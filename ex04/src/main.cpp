#include <iostream>
#include <fstream>

void	my_replace(size_t pos, size_t n1, std::string s2, std::string &line) {
    line = line.substr(0, pos) + s2 + line.substr(pos + n1);
}


int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./ex04 <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	std::ifstream ifs(filename);
	if (!ifs.is_open())
	{
		std::cout << "Error: file could not be opened" << std::endl;
		return 1;
	}

	std::string line;
	std::string output;
	while (std::getline(ifs, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			my_replace(pos, s1.length(), s2, line);
			pos += s2.length();
		}
		output += line + "\n";
	}
	ifs.close();

	std::string replaced_filename = filename + ".replace";
	std::ofstream ofs(replaced_filename);
	if (!ofs.is_open())
	{
		std::cout << "Error: file could not be opened" << std::endl;
		return 1;
	}
	ofs << output;
	ofs.close();
	return 0;
}
