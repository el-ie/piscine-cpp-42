
#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include "Contacts.hpp"

PhoneBook::PhoneBook(void) {
	_number_of_contacts = 0;
	_index = -1;
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

void	PhoneBook::add_contact(void) {

	_number_of_contacts++;
	_index++;

	if (_index == 8)
		_index = 0;

	std::cout << "Enter informations :" << std::endl;
	std::cout << "first name :" << std::endl;
	std::getline(std::cin, persons[_index].first_name);
	std::cout << "Last name :" << std::endl;
	std::getline(std::cin, persons[_index].last_name);
	std::cout << "Nickname :" << std::endl;
	std::getline(std::cin, persons[_index].nickname);
	std::cout << "Phone number :" << std::endl;
	std::getline(std::cin, persons[_index].phone_number);
	std::cout << "Darkest secret :" << std::endl;
	std::getline(std::cin, persons[_index].darkest_secret);
	
	persons[_index].contact_index = _index;
	persons[_index].entered = 1;
	//protect?
}

void	PhoneBook::print_contacts(void) const {

	std::cout << '|' << std::setw(10) << "index" << '|' << std::setw(10)
		<< "first name" << '|' << std::setw(10) << "last name" << '|'
		<< std::setw(10) << "Nickname" << '|' << std::endl;


	for (int	i = 0; i < 8; i++) {
		if (_index > -1 && persons[i].entered == 1) {
			std::cout << '|' << std::setw(10) << i << '|' << std::setw(10)
				<< persons[i].first_name.substr(0,10) << '|' << std::setw(10) << persons[i].last_name << '|'
				<< std::setw(10) << persons[i].nickname << '|' << std::endl;
		}
	}
}

int	PhoneBook::get_contact_nb(void) const {

	return (_number_of_contacts);
}
