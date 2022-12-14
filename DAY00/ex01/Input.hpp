#ifndef INPUT_CLASS_H
# define INPUT_CLASS_H

enum	e_code_error_input
{
	CODE_EOF,
	CODE_NON_PRINTABLE,
}

class Input {
	
	public:
		int		check_input(void);
		bool	contain_non_printable(void);
		bool	contain_eof(void);


	private:
		static	string	_input;
		Input();
		~Input();
}

#endif
