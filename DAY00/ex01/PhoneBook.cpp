
#include <iostream>
#include "PhoneBook.hpp"
#include "Contacts.hpp"

PhoneBook::PhoneBook(void) {
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

void	PhoneBook::add_contact(void) {

	this->_number_of_contacts++;

	std::cout << "Enter informations :" << std::endl;
	std::cout << "first name :" << std::endl;
	std::getline(std::cin, persons[_number_of_contacts].first_name);
	std::cout << "Last name :" << std::endl;
	std::getline(std::cin, persons[_number_of_contacts].last_name);
	std::cout << "Nickname :" << std::endl;
	std::getline(std::cin, persons[_number_of_contacts].nickname);
	std::cout << "Phone number :" << std::endl;
	std::getline(std::cin, persons[_number_of_contacts].phone_number);
	std::cout << "Darkest secret :" << std::endl;
	std::getline(std::cin, persons[_number_of_contacts].darkest_secret);
	//protect?

}

int	PhoneBook::get_contact_nb(void) {
	
	return (this->_number_of_contacts);
}
