#include <iostream>
#include "PhoneBook.hpp"
#include "Contacts.hpp"
#include <iomanip>

int	main(void)
{
//	int test = 0;
//
//	std::cin >> test;
//	if (std::cin.fail())
//		std::cout << "Failed" << std::endl;
//	else
//		std::cout << test << std::endl;
//
//	return (1);

	PhoneBook pb;

	std::string buff;

	while (1) {

		std::getline(std::cin, buff);

		if (std::cin.eof())
			break;

		//std::cout << "buf = [" << buff << ']' << std::endl;

		if (buff.compare("ADD") == 0)
			pb.add_contact();

		if (buff.compare("SEARCH") == 0)
			pb.print_contacts();

		if (buff.compare("EXIT") == 0)
			return 1;

		if (std::cin.fail())
			break;

	}

	return (0);
}

