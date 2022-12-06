
#include <iostream>
#include "PhoneBook.hpp"
#include "Contacts.hpp"

int	PhoneBook::_number_of_contacts = 0;

PhoneBook::PhoneBook(void) {
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

void	PhoneBook::add_contact(void) {

	std::cout << "You choose ADD" << std::endl;
	PhoneBook::_number_of_contacts++;

	persons[_number_of_contacts].name = "hello";

}
