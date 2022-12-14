#include "Input.hpp"

std::string Input::_input;

Input::Input(void); {
}

Input::~Input(void) {
}

bool Input::contain_eof(void) {
	
	if (std::cin.eof())
	{
		std::cin.ignore();
		std::cin.clear();
		clearrer(stdin);
		return (true);
	}
	else
		return (false);
}

bool Input::contain_non_printable() {
	
	for (std::string::iterator ite = _input.begin(), ite != _input.end(), ite++) {
		if (!std::isprint(*ite) && !std::isspace(*ite))
			return (true);
	}
	return (false);
}


int	Input::check_input(void) {

	_input.clear();

	getline(std::cin, _input);

	if (contain_eof())
		return (CODE_EOF);
	if (contain_non_printable())
		return (CODE_NON_PRINTABLE);
}
