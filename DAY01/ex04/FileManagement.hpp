#ifndef FILEMANAGEMENT_H
# define FILEMANAGEMENT_H

#include <iostream>
#include <string>

#include <cstring>
#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <cstdio>


class FileManagement
{
	public:

		FileManagement (void);
   	   ~FileManagement (void);

	   bool	is_valid_file(const char *path) const;

	private:

	std::string _content;
};

#endif
