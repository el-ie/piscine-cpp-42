
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
	//protect?
}

#include <cstdlib> //remove

void	PhoneBook::search_contact(void) const {

	if (_number_of_contacts < 1)
	{
		std::cout << std::endl << "No contact to see yet, add a contact with ADD." << std::endl;
		return ;
	}

	std::cout << '|' << std::setw(10) << "index" << '|' << std::setw(10)
		<< "first name" << '|' << std::setw(10) << "last name" << '|'
		<< std::setw(10) << "Nickname" << '|' << std::endl;

	for (int i = 0; i < 8 && i < _number_of_contacts; i++) {

			std::cout << '|' << std::setw(10) << i;
			if (persons[i].first_name.length() > 10)
				std::cout << '|' << std::setw(9) << persons[i].first_name.substr(0,9) << ".";
			else
				std::cout << '|' << std::setw(10) << persons[i].first_name;
			if (persons[i].last_name.length() > 10)
				std::cout << '|' << std::setw(9) << persons[i].last_name.substr(0,9) << ".";
			else
				std::cout << '|' << std::setw(10) << persons[i].last_name;
			if (persons[i].nickname.length() > 10)
				std::cout << '|' << std::setw(9) << persons[i].nickname.substr(0,9) << ".";
			else
				std::cout << '|' << std::setw(10) << persons[i].nickname;
			std::cout << "|" << std::endl;
	}

	std::cout << std::endl << "Wich index would you like to see ?" << std::endl;

	int choice;
	std::string number;
	std::getline(std::cin, number);

	if (std::cin.fail()) {
		std::cout << "Bad selection, back to menu." << std::endl;
		return ;
	}

	//check number mauvais input, overflow...
	choice = atoi(number.c_str());

	if (!(choice >= 0 && choice <= 8)) {
		std::cout << "Selection out of range, back to menu." << std::endl;
		return ;	
	}

	if (choice >= _number_of_contacts) {
		std::cout << "Choice isn't available yet, back to menu." << std::endl;
		return ;
	}

	std::cout << "Index : " << choice << std::endl;
	std::cout << "First name : " << persons[choice].first_name << std::endl;
	std::cout << "Nickname : " << persons[choice].nickname << std::endl;
	std::cout << "Phone number : " << persons[choice].phone_number << std::endl;
	std::cout << "Darkest secret : " << persons[choice].darkest_secret << std::endl;

	return ;
}

int	PhoneBook::get_contact_nb(void) const {

	return (_number_of_contacts);
}
