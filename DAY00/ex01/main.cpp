#include <iostream>
#include "PhoneBook.hpp"
#include "Contacts.hpp"

#include <unistd.h>//delete

int	main(void)
{

	PhoneBook pb;

	std::string buff;

	while (1) {

		std::getline(std::cin, buff);

		if (std::cin.eof())
			break;

		//std::cout << "buf = [" << buff << ']' << std::endl;

		if (buff.compare("ADD") == 0)
			pb.add_contact();

	}

	std::cout << std::endl << "last contact name = " << pb.persons[pb.get_contact_nb()].first_name;


	return (0);
}

