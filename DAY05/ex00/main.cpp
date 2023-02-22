#include "Bureaucrat.hpp"
#include <stdexcept>
#include <iostream>
#include <string>

int	main(void)
{

	//////////////////// Exception a l'appelle du constructeur: //////////////////////

	// Grade correct :

	std::cout << std::endl << "---------------- grade correct -------------" << std::endl << std::endl;
	try {
		Bureaucrat	ted("TED", 35);	// envoi un throw s'il ya un probleme de grade
		std::cout << "Pas d'exception pour le constructeur de " << ted; // skip si un throw est envoye au dessus
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
	std::cout << std::endl << "--------------- Grade too high ---------------" << std::endl << std::endl;

	// Grade too high :

	try {
		Bureaucrat	ted("TED", 0);
		std::cout << "Pas d'exception pour le constructeur de " << ted << std::endl; // skip si un throw est envoye au dessus
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
	std::cout << std::endl << "------------- Grade too low -----------------" << std::endl << std::endl;

	// Grade too low :

	try {
		Bureaucrat	ted("TED", 151);
		std::cout << "Pas d'exception pour le constructeur de " << ted << std::endl; // skip si un throw est envoye au dessus
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

	//////////////////// Exceptions a l'appelle des modifications de grade : ////////
	
	// promotion correcte :
	std::cout << std::endl << "------------- correct promotion -----------------" << std::endl << std::endl;
	try {
		Bureaucrat	bob("boby", 43);
		std::cout << bob << std::endl;
		bob.promotion();
		std::cout << "Pas d'exception pour la promotion de " << bob << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& ex) {
		std::cerr << ex.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& ex) {
		std::cerr << ex.what() << std::endl;
	}
	catch (...) {
		std::cerr << "Other error catched." << std::endl;
	}

	// regression correcte :
	std::cout << std::endl << "------------- correct regression -----------------" << std::endl << std::endl;
	try {
		Bureaucrat	alexandre("alex", 41);
		std::cout << alexandre << std::endl;
		alexandre.regression();
		std::cout << "Pas d'exception pour la regression de " << alexandre << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& ex) {
		std::cerr << ex.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& ex) {
		std::cerr << ex.what() << std::endl;
	}
	catch (...) {
		std::cerr << "Other error catched" << std::endl;
	}

	//promotion ratee:

	std::cout << std::endl << "------------- incorrect promotion -----------------" << std::endl << std::endl;
	try {
		Bureaucrat	bob("boby", 1);
		std::cout << bob << std::endl;
		bob.promotion();
		std::cout << "Pas d'exception pour la promotion de " << bob << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& ex) {
		std::cerr << ex.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& ex) {
		std::cerr << ex.what() << std::endl;
	}
	catch (...) {
		std::cerr << "Other error catched." << std::endl;
	}

	// regression ratee :

	std::cout << std::endl << "------------- incorrect regression -----------------" << std::endl << std::endl;
	try {
		Bureaucrat	alexandre("alex", 150);
		std::cout << alexandre << std::endl;
		alexandre.regression();
		std::cout << "Pas d'exception pour la regression de " << alexandre << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& ex) {
		std::cerr << ex.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& ex) {
		std::cerr << ex.what() << std::endl;
	}
	catch (...) {
		std::cerr << "Other error catched" << std::endl;
	}
	std::cout << std::endl;

	return 0;
}
