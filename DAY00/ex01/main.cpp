
#include "source.hpp"

#include "PhoneBook.hpp"
#include "Contacts.hpp"
#include "Input.hpp"

#include <cctype>
#include <ctype.h>
#include <stdio.h>
#include <ctype.h>

int	main(void)
{

	PhoneBook pb; //repertoire ?

	std::string buff;

	while (std::getline(std::cin, buff)) {

		//std::cout << "-----------------TOUR----------------- [" << buff << "]\n";
		std::cout << std::endl;

		if (buff.compare("ADD") == 0)
			pb.add_contact();
		else if (buff.compare("SEARCH") == 0)
			pb.search_contact();
		else if (buff == "EXIT")
		{ std::cout << "Exiting program" << std::endl; return 1; }
		else
			std::cout << "Incorrect entry, you can ADD, SEARCH or EXIT" << std::endl;

		//std::cin.clear(); //continuer le programme apres ctrl d
		//std::cin.ignore();
		//faire avec fonction fail eof string vide
	}

	return 0;
}

