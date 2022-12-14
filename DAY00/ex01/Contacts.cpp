
#include <iostream>
#include "PhoneBook.hpp"
#include "Contacts.hpp"

Contacts::Contacts(void) {
	//this->entered = 0;
	return;
}

Contacts::~Contacts(void) {
	return;
}

Contacts	Contacts::create_new(void) {

	Contacts	new_contact;

	std::cout << "Enter informations :" << std::endl;
	std::cout << "first name :" << std::endl;
	std::getline(std::cin, new_contact.first_name);
	if (std::cin.eof()) { return new_contact;}
	std::cout << "Last name :" << std::endl;
	std::getline(std::cin, new_contact.last_name);
	if (std::cin.eof()) { return new_contact;}
	std::cout << "Nickname :" << std::endl;
	std::getline(std::cin, new_contact.nickname);
	if (std::cin.eof()) { return new_contact;}
	std::cout << "Phone number :" << std::endl;
	std::getline(std::cin, new_contact.phone_number);
	if (std::cin.eof()) { return new_contact;}
	std::cout << "Darkest secret :" << std::endl;
	std::getline(std::cin, new_contact.darkest_secret);
	if (std::cin.eof()) { return new_contact;}
	//new_contact.entered = 1; // ce n est pas initialise a 0, le faire ??

	return (new_contact);
}
