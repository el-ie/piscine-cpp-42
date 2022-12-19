
#include "source.hpp"

#include "PhoneBook.hpp"
#include "Contacts.hpp"
#include "Input.hpp"



int	main(void)
{

//	std::string test;
//	std::getline(std::cin, test);
//	std::cout << "[" << test << "]" << std::endl;
//	while (1)
//	{
//		std::cout << Input::check_input() << std::endl;
//
//		Input::check_input();
//		std::cout << "->" << Input::get_input() << std::endl;
//		Input::testest();	
//		Input::get_input();
//		std::cout << "input = ["  << Input::get_input() << "]" << std::endl;
//	}
//	sleep(100);
//	return (0);

	PhoneBook pb; //checker si cela doit s appeller repertoire ?

	std::string buff;

	while (std::getline(std::cin, buff)) {

		//std::cout << "-----------------TOUR----------------- [" << buff << "]\n";
		std::cout << "-----\n";

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

