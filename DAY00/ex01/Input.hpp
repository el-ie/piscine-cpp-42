
#include "source.hpp"

#ifndef INPUT_CLASS_H
# define INPUT_CLASS_H

enum	e_code_error_input
{
	CODE_EOF,
	CODE_NON_PRINTABLE,
	CODE_GOOD_INPUT,
};

class Input {
	
	public:
		static int			check_input(void);
		static bool			contain_non_printable(void);
		static bool			contain_eof(void);
		static std::string 	_input;

	private:

		Input();
		~Input();
};

#endif
