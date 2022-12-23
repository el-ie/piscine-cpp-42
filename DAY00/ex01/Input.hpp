
#include "source.hpp"

#ifndef INPUT_CLASS_H
# define INPUT_CLASS_H

enum	e_code_error_input
{
	CODE_GOOD_INPUT,
	CODE_FAIL,
	CODE_EOF,
	CODE_NON_PRINTABLE,
	CODE_CONTAIN_NON_NUMERIC,
	CODE_BAD_INDEX_LEN,
	CODE_INDEX_OUT_OF_RANGE,
	CODE_INDEX_UNAVAILABLE,
};

class Input {
	
	public:
		static int			check_input(void);
		static int			check_input_index(void);
		static bool			contain_non_printable(void);
		static bool			contain_eof(void);
		static bool			is_only_numeric(void);



		static std::string	get_input(void);

	private:

		Input();
		~Input();

		static std::string 	_input;
};

#endif
