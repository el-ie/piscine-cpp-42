#include <iostream>
#include <fstream>
#include <string>


int	main(int argc, char **argv)
{
	std::ifstream input_file(argv[1]);

	if (!input_file.is_open()) {
		std::cerr << "Input file couldn't be open" << std::endl; return (1);
	}
	if (input_file.eof()) {
		std::cerr << "File is empty." << std::endl; return (1);
	}
	if (input_file.bad()) {
		std::cerr << "File is empty." << std::endl; return (1);
	}

	std::string output_filename = argv[1];
	output_filename += ".replace";
	std::ofstream	output_file(output_filename.c_str());

	if (!output_file.is_open()) {
		std::cerr << "Output file couldn't be open" << std::endl; return (1);
	}
	
	std::string buff;

	while (std::getline(input_file, buff))
	{
		if (buff.compare(argv[2]) == 0)
			output_file << argv[3] << std::endl;
		else
			output_file << buff << std::endl;
	}
}
