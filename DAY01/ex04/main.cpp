#include <iostream>
#include <fstream>
#include <string>

#include "FileManagement.hpp"

int	main(int argc, char **argv)
{

	if (argc != 4) {
		std::cerr << "Bad number of arguments." << std::endl;
		return (1);
	}

	FileManagement input;
	
	if (input.file_to_string(argv[1]) == false)
		return (1);

	std::string content = input.get_content();

	std::string find_str = argv[2];
	std::string replace_str = argv[3];

	int	pos = content.find(find_str);

	while (pos != std::string::npos) {
			
		content = content.substr(0, pos) + replace_str
			+ content.substr(pos + find_str.length(), pos + content.length());
		pos = content.find(find_str);
	}

	std::string output_filename = argv[1];
	output_filename += ".replace";
	std::ofstream	output_file(output_filename.c_str());

	if (!output_file.is_open()) {
		std::cerr << "Error with output file" << std::endl;
	}

	output_file << content;

	return (1);




//	std::ifstream input_file(argv[1]);
//
//	std::string output_filename = argv[1];
//	output_filename += ".replace";
//	std::ofstream	output_file(output_filename.c_str());
//
//	if (!output_file.is_open()) {
//		std::cerr << "Output file couldn't be open" << std::endl; return (1);
//	}
//	
//	std::string buff;
//
//	while (std::getline(input_file, buff))
//	{
//		if (buff.compare(argv[2]) == 0)
//			output_file << argv[3] << std::endl;
//		else
//			output_file << buff << std::endl;
//	}
}
