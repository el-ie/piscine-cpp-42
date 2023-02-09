
#include "Bureaucrat.hpp"
#include <stdexcept>

//peut on faire la surcharge d operateur directement dans la classe ?
std::ostream& operator<<(std::ostream& out , const Bureaucrat& ted) {

	out << ted.get_name() << ", bureaucrat grade " << ted.get_grade() << std::endl;
	return (out);
}

int	main(void)
{

		// Grade correct :

	std::cout << "------------------------------" << std::endl ;
	try {
	Bureaucrat	ted("TED", 35);	// envoi un throw s'il ya un probleme de grade
	std::cout << ted << std::endl; // skip si un throw est envoye au dessus
	}
	catch (Bureaucrat::GradeTooHighException& ex) {
		std::cerr << ex.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& ex) {
		std::cerr << ex.what() << std::endl;
	}
	// faut il catch std::exception avant ...?
	catch (...) {
		std::cerr << "Other error." << std::endl;
	}
	std::cout << "------------------------------" << std::endl << std::endl;

		// Grade too high :

	try {
	Bureaucrat	ted("TED", 0);
	std::cout << ted << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& ex) {
		std::cerr << ex.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& ex) {
		std::cerr << ex.what() << std::endl;
	}
	catch (...) {
		std::cerr << "Other error." << std::endl;
	}
	std::cout << "------------------------------" << std::endl;

}
