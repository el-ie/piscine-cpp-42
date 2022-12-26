#ifndef INPUT_H
# define INPUT_H

#include <iostream>
#include <string>
#include <cstring>
#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <cstdio>


class Input
{
	public:

		Input (void);
   	   ~Input (void);

	   bool			file_to_string(const char* path);
	   std::string	get_content(void) const;
	   
	private:

	std::string _content;

	bool	is_valid_file(const char *path) const;
};

#endif
