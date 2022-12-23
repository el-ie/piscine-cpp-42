#include "Contacts.hpp"

Contacts::Contacts(void) {
}

Contacts::~Contacts(void) {
}

const char*	Contacts::labels[FIELD_NBR] = {
	"    First name :  ",
	"     Last name :  ",
	"      Nickname :  ",
	"  Phone number :  ",
	"Darkest secret :  ",
};

void	Contacts::edit_new_contact(void) {

	int	i = 0;

	std::cout << std::endl;
	while (i < FIELD_NBR){
		std::cout << labels[i] << std::endl;
		if (Input::check_input() != CODE_GOOD_INPUT) {
			std::cout << "Please enter alphanumeric character." << std::endl;
		}
		else {
			_informations[i] = Input::get_input();
			i++;
		}
		std::cout << std::endl;
	}
}

std::string	Contacts::get_information(int field) const{
	return (this->_informations[field]);
}
