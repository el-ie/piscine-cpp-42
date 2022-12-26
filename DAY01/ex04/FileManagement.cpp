#include "FileManagement.hpp"

#include <iostream>
#include <string>
#include <cstring>
#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <cstdio>


FileManagement::FileManagement(void)
{
}

FileManagement::~FileManagement(void)
{
}

std::string	FileManagement::get_content(void) {
	return (_content);
}

bool	FileManagement::is_valid_file(const char *path) const {

	struct stat st;

	if (stat(path, &st) == -1) {
		perror(path);
		return (false);
	}

	if (S_ISREG(st.st_mode) == 0) {
		std::cerr << path << " is not a regular file." << std::endl;
		return (false);
	}

	return (true);
}

bool	FileManagement::file_to_string(const char*	path) {

	std::ifstream	file;

	if (!is_valid_file(path)) {
		return (1);
	}

	file.open(path, std::ios::in);

	if (file.is_open() == false) {
		std::cerr << "Error oppenning file." << std::endl;
		return (false);
	}
	else if (file.eof()) {
		std::cerr << "File error." << std::endl;
		return (false);
	}
	else if (file.bad()) {
		std::cerr << "File error." << std::endl;
		return (false);
	}

	_content.assign(std::istreambuf_iterator<char>(file),
					std::istreambuf_iterator<char>());

	file.close();

	return (true);
}




