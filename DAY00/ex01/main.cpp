#include "PhoneBook.hpp"
#include "Contacts.hpp"
#include "Input.hpp"
#include <cstdio>

int	main(void)
{

	PhoneBook pb;

	while (1) {

		std::cout << "What do you want to do ?" << std::endl << std::endl;

		while (Input::check_input() != 0)
			std::cout << "Bad input, please enter a valid entry." << std::endl;

		if (Input::get_input().compare("ADD") == 0)
			pb.add_contact();
		else if (Input::get_input().compare("SEARCH") == 0)
			pb.search_contact();
		else if (Input::get_input() == "EXIT") {
			std::cout << "Exiting program" << std::endl;
			return (0);
		}
		else
			std::cout << "Incorrect entry, you can ADD, SEARCH or EXIT" << std::endl;
	}

	return (0);
}

