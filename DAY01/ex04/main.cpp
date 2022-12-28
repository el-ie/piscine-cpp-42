#include <iostream>
#include <fstream>
#include <string>

#include "Input.hpp"

int	main(int argc, char **argv)
{

	if (argc != 4) {
		std::cerr << "Bad number of arguments." << std::endl;
		return (1);
	}

	Input input;
	std::string find_str = argv[2];
	std::string replace_str = argv[3];
	std::string output_filename = argv[1];
	
	if (input.file_to_string(argv[1]) == false)
		return (1);

	std::string content = input.get_content();

	std::basic_string<char>::size_type pos = content.find(find_str);

	while (pos != std::string::npos) {
			
		content = content.substr(0, pos) + replace_str
			+ content.substr(pos + find_str.length(), pos + content.length());
		pos = content.find(find_str, pos + replace_str.length());
	}
	
	output_filename += ".replace";
	std::ofstream	output_file(output_filename.c_str());

	if (!output_file.is_open()) {
		std::cerr << "Error with output file" << std::endl;
		return (1);
	}

	output_file << content;
	output_file.close();

	return (1);
}
