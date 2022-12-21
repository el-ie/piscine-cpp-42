#include "Input.hpp"
#include <ctype.h>

//#include <iostream>
//#include <cstdio>

std::string Input::_input;

Input::Input(void) {
}

Input::~Input(void) {
}

bool Input::contain_eof(void) {
	
	if (std::cin.eof())
	{
		std::cin.ignore();
		std::cin.clear();
		clearerr(stdin);
		return (true);
	}
	else
		return (false);
}

bool Input::contain_non_printable() {
	
	for (std::string::iterator ite = _input.begin(); ite != _input.end(); ite++) {
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
	if (std::cin.fail())
		return (CODE_FAIL);
	if (contain_non_printable()) //comment pourrait il y a voir un non printable ?
		return (CODE_NON_PRINTABLE);
	return (CODE_GOOD_INPUT);
}

bool	Input::is_only_numeric() {

	for (std::string::iterator ite = _input.begin(); ite != _input.end(); ite++)
		if (!(*ite >= '0' && *ite <= '9'))
			return (false);
	return (true);
}

int Input::check_input_index(void) {

	int	return_code = check_input();

	if (return_code != CODE_GOOD_INPUT)
		return (return_code);

	if (!is_only_numeric())
		return (CODE_CONTAIN_NON_NUMERIC);

	if (_input.length() != 1)
		return (CODE_BAD_INDEX_LEN);

	return (CODE_GOOD_INPUT);
}

std::string Input::get_input(void) {
	return (Input::_input);
}

void	Input::testest(void) {
	return ;
}
