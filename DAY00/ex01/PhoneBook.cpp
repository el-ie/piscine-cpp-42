#include "PhoneBook.hpp"

int			PhoneBook::_number_of_contacts = 0;
int			PhoneBook::_index = -1;
Contacts	PhoneBook::_persons[CONTACT_MAX];

PhoneBook::PhoneBook(void) {
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

void	PhoneBook::add_contact(void) {

	_number_of_contacts++;
	_index++;

	if (_index == CONTACT_MAX)
		_index = 0;

	std::cout << "		Creating a new contact" << std::endl;
	_persons[_index].edit_new_contact();
	std::cout << "	Contact added with success." << std::endl << std::endl;
}

void	PhoneBook::_display_fields_headers(void) const{
	std::cout << '|' << std::setw(10) << "index" << '|' << std::setw(10)
		<< "first name" << '|' << std::setw(10) << "last name" << '|'
		<< std::setw(10) << "Nickname" << '|' << std::endl;
}

void	PhoneBook::_display_fields_contacts(void) const{
	for (int i = 0; i < CONTACT_MAX && i < PhoneBook::_number_of_contacts; i++) {
		std::cout << '|' << std::setw(10) << i;
		for (int field = 0; field < 3; field++) {
			if (_persons[i].get_information(field).length() > 10)
				std::cout << '|' << std::setw(9) << _persons[i].get_information(field).substr(0,9) << ".";
			else
				std::cout << '|' << std::setw(10) << _persons[i].get_information(field);
		}
		std::cout << "|" << std::endl;
	}
}

void	PhoneBook::_display_fields_one_contact(int choice) const{

	std::cout << "Informations of contact " << choice << ":" << std::endl << std::endl;
	std::cout << "         Index :  " << choice << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << Contacts::labels[i] << _persons[choice].get_information(i) << std::endl;
	std::cout << std::endl;
}

void	PhoneBook::search_contact(void) const {

	std::cout << std::endl;
	if (PhoneBook::_number_of_contacts < 1) {
		std::cout << "No contact to see yet, add a contact with ADD." << std::endl;
		return ;
	}

	_display_fields_headers();

	_display_fields_contacts();

	std::cout << std::endl << "Wich index would you like to see ?" << std::endl;

	while (Input::check_input_index() != CODE_GOOD_INPUT) {
		std::cout << "Pleas enter a valid index." << std::endl;
	}
	std::cout << std::endl;

	int choice = atoi(Input::get_input().c_str());

	_display_fields_one_contact(choice);

	return ;
}

int	PhoneBook::get_contact_nb(void) {

	return (PhoneBook::_number_of_contacts);
}
