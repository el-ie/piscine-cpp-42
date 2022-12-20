
#include "Contacts.hpp"

Contacts::Contacts(void) {
	//this->entered = 0;
}

Contacts::~Contacts(void) {
}

std::string	Contacts::labels[FIELD_NBR] = {
	"First name :",
	"Last name :",
	"Nickname :",
	"Phone number :",
	"Darkest secret :",
};

Contacts	Contacts::create_new(void) {

	Contacts	new_contact;
	int	i = 0;

	while (i < FIELD_NBR){
		std::cout << labels[i] << std::endl;
		if (Input::check_input() != CODE_GOOD_INPUT) {
			std::cout << "Pleas enter alphanumeric character only" << std::endl;
		}
		else {
			new_contact.informations[i] = Input::get_input();
			i++;
		}
	}
	//new_contact.entered = 1; // ce n est pas initialise a 0, le faire ??
	return (new_contact);
}
