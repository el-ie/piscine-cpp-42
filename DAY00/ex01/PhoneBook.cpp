
#include "PhoneBook.hpp"
#include <cstdlib> //keep or not

int	PhoneBook::_number_of_contacts = 0;
int	PhoneBook::_index = -1;

PhoneBook::PhoneBook(void) {
	//_number_of_contacts = 0;
	//_index = -1;
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

int		check_if_cin_fail(void) {
	if (std::cin.fail()) {
		std::cout << "Contact entry stopped, back to menu.";
		std::cin.clear();

		return (-1);
	}
	return (0);
}

void	PhoneBook::add_contact(void) {

	_number_of_contacts++;
	_index++;

	if (_index == 8)
		_index = 0;

	persons[_index] = persons[_index].create_new();
	persons[_index].contact_index = _index;
	std::cout << "	Contact added with success." << std::endl;
}

void	PhoneBook::_display_fields_headers(void) const{
	std::cout << '|' << std::setw(10) << "index" << '|' << std::setw(10)
		<< "first name" << '|' << std::setw(10) << "last name" << '|'
		<< std::setw(10) << "Nickname" << '|' << std::endl;
}

void	PhoneBook::_display_fields_contacts(void) const{
	for (int i = 0; i < 8 && i < PhoneBook::_number_of_contacts; i++) {
		std::cout << '|' << std::setw(10) << i;
		for (int field = 0; field < 3; field++) {
			if (persons[i].informations[field].length() > 10)
				std::cout << '|' << std::setw(9) << persons[i].informations[field].substr(0,9) << ".";
			else
				std::cout << '|' << std::setw(10) << persons[i].informations[field];
		}
		std::cout << "|" << std::endl;
	}
}

void	PhoneBook::_display_fields_one_contact(int choice) const{

	std::cout << "Index : " << choice << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << Contacts::labels[i] << persons[choice].informations[i] << std::endl;
}

void	PhoneBook::search_contact(void) const {

	if (PhoneBook::_number_of_contacts < 1)
	{ std::cout << std::endl << "No contact to see yet, add a contact with ADD." << std::endl; return ; }

	_display_fields_headers();

	_display_fields_contacts();

	std::cout << std::endl << "Wich index would you like to see ?" << std::endl;

	while (Input::check_input_index() != CODE_GOOD_INPUT) {
		std::cout << "Pleas enter a valid index." << std::endl;
	}

	int choice = atoi(Input::get_input().c_str());

	_display_fields_one_contact(choice);

	return ;
}

int	PhoneBook::get_contact_nb(void) {

	return (PhoneBook::_number_of_contacts);
}
