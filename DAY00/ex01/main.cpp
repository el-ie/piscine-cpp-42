#include <iostream>
#include "PhoneBook.hpp"
#include "Contacts.hpp"
#include <iomanip>

int	main(void)
{

//	std::string bufff;
//	std::getline(std::cin, bufff);
//
//	if (std::cin.eof())
//	{
//		std::cout << "END OF FILE \n";
//		//return 1;
//	}
//
//	std::cout << "FIN DE LA PAGE \n";
//	return 1;


	PhoneBook pb;

	std::string buff;

	while (std::getline(std::cin, buff)) {

		//std::cout << "-----------------TOUR------------------\n";

		if (buff.compare("ADD") == 0)
			pb.add_contact();
		else if (buff.compare("SEARCH") == 0)
			pb.search_contact();
		else if (buff == "EXIT")
		{ std::cout << "Exiting program" << std::endl; return 1; }
		else
			std::cout << "Incorrect entry, you can ADD, SEARCH or EXIT" << std::endl;

		std::cin.clear();

	}

	return 0;
}

