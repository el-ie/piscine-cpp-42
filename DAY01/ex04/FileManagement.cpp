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

bool	File::open_kkkkkkkkkkk
