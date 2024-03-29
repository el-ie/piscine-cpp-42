#include <string>
#include <iostream>
#include <cstdio>

#ifndef INPUT_CLASS_H
# define INPUT_CLASS_H

enum	e_code_error_input
{
	CODE_GOOD_INPUT,
	CODE_EOF,
	CODE_FAIL,
	CODE_NOTHING_ENTERED,
	CODE_NON_PRINTABLE,
	CODE_ONLY_WHITE,
	CODE_CONTAIN_NON_NUMERIC,
	CODE_INDEX_OUT_OF_RANGE,
	CODE_BAD_INDEX_LEN,
	CODE_INDEX_UNAVAILABLE,
};

class Input {
	
	public:
		static int			check_input(void);
		static int			check_input_index(void);

		static std::string	get_input(void);

	private:

		Input();
		~Input();

		static bool			_contain_non_printable(void);
		static bool			_contain_eof(void);
		static bool			_is_only_numeric(void);
		static bool			_is_only_white(void);

		static std::string 	_input;
};

#endif
