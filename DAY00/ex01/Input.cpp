#include "Input.hpp"
#include "PhoneBook.hpp"
#include <cstdlib>

std::string Input::_input;

Input::Input(void) {
}

Input::~Input(void) {
}

bool Input::_contain_eof(void) {
	
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

bool Input::_contain_non_printable(){
	
	for (std::string::iterator ite = _input.begin(); ite != _input.end(); ite++) {
		if (!std::isprint(*ite) && !std::isspace(*ite))
			return (true);
	}
	return (false);
}

bool   Input::_is_only_numeric() {

       for (std::string::iterator ite = _input.begin(); ite != _input.end(); ite++)
               if (!(*ite >= '0' && *ite <= '9'))
                       return (false);
       return (true);
}

bool	Input::_is_only_white() {

	for (std::string::iterator ite = _input.begin(); ite != _input.end(); ite++)
		if (*ite != ' ' && *ite != '\t')
			return (false);
	return (true);
}

int	Input::check_input(void) {

	_input.clear();

	getline(std::cin, _input);

	if (_contain_eof())
		return (CODE_EOF);
	if (std::cin.fail())
		return (CODE_FAIL);
	if (_input.length() == 0)
		return (CODE_NOTHING_ENTERED);
	if (_contain_non_printable())
		return (CODE_NON_PRINTABLE);
	if (_is_only_white())
		return (CODE_ONLY_WHITE);
	return (CODE_GOOD_INPUT);
}

int Input::check_input_index(void) {

	int	return_code = check_input();

	if (return_code != CODE_GOOD_INPUT)
		return (return_code);

	if (!_is_only_numeric()) {
		std::cout << "Index is in incorrect format." << std::endl;
		return (CODE_CONTAIN_NON_NUMERIC);
	}

	int	choice = atoi(_input.c_str());

	if (!(choice >= 0 && choice < 8)) {
		std::cout << "Selection out of range." << std::endl;
		return (CODE_INDEX_OUT_OF_RANGE);	
	}

	if (_input.length() != 1) {
		std::cout << "Bad input." << std::endl;
		return (CODE_BAD_INDEX_LEN);
	}

	if (choice >= PhoneBook::get_contact_nb()) {
		std::cout << "Choice isn't available yet." << std::endl;
		return (CODE_INDEX_UNAVAILABLE);
	}

	return (CODE_GOOD_INPUT);
}

std::string Input::get_input(void) {
	return (Input::_input);
}
