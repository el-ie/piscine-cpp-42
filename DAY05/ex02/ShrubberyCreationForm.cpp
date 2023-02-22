#include <fstream>
#include <iostream>
#include <string>
#include <stdexcept>

#include "ShrubberyCreationForm.hpp"

#define trees "\n\
                                            .         \n\
                                   .         ; \n\
      .              .              ;%     ;; \n\
        ,           ,                :;%  %; \n\
         :         ;                   :;%;'     ., \n\
,.        %;     %;            ;        %;'    ,; \n\
  ;       ;%;  %%;        ,     %;    ;%;    ,%' \n\
   %;       %;%;      ,  ;       %;  ;%;   ,%;' \n\
    ;%;      %;        ;%;        % ;%;  ,%;' \n\
     `%;.     ;%;     %;'         `;%%;.%;' \n\
      `:;%.    ;%%. %@;        %; ;@%;%' \n\
         `:%;.  :;bd%;          %;@%;' \n\
           `@%:.  :;%.         ;@@%;' \n\
             `@%.  `;@%.      ;@@%; \n\
               `@%%. `@%%    ;@@%; \n\
                 ;@%. :@%%  %@@%; \n\
                   %@bd%%%bd%%:; \n\
                     #@%%%%%:;; \n\
                     %@@%%%::; \n\
                     %@@@%(o);  . ' \n\
                     %@@@o%;:(.,' \n\
                 `.. %@@@o%::; \n\
                    `)@@@o%::; \n\
                     %@@(o)::; \n\
                    .%@@@@%::; \n\
                    ;%@@@@%::;. \n\
                   ;%@@@@%%:;;;. \n\
               ...;%@@@@@%%:;;;;,..                   \n\
"


///////////////////////// Constructors ////////////////////////////

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form("Shrubbery form", 145, 137),
	target("default target")
{
	//std::cout << "ShrubberyCreationForm default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) :
	Form("Shrubbery form", 145, 137),
	target(target)
{
	//std::cout << "ShrubberyCreationForm constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) :
	Form(other.get_name(), 145, 137),
	target(other.get_target())
{
	std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	//std::cout << "ShrubberyCreationForm destructor" << std::endl;
}

/////////////////////// Overloads ////////////////////////////////

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	std::cout << "ShrubberyCreationForm assignation operator" << std::endl;
	(void)other; //rien , laisser fonction ? _______________________________
	return *this;
}

std::ostream&	operator<<(std::ostream &output, const ShrubberyCreationForm& formulaire) {
	output << "	| Shrubbery Form: " << std::endl << "	|target = " << formulaire.get_target()
	<< ", signed status = " << formulaire.get_signed_status() << std::endl
	<< "	| grade_sign = " << formulaire.get_grade_sign() << " grade execute = "
	<< formulaire.get_grade_execute() << std::endl;
	return (output);
}

/////////////////////// Utilities ////////////////////////////////

void	ShrubberyCreationForm::process(void) const {

	std::string	filename = target + "_shrubbery";
	std::ofstream	file(filename.c_str());

	if (!file || file.is_open() == false)
	{
		std::cerr << "Error oppening file for ShrubberyCreationForm" << std::endl;
		return ;
	}
	file << trees << std::endl << trees << std::endl;
	file.close();
}



/////////////////////// accessors /////////////////////////////////

const std::string &	ShrubberyCreationForm::get_target() const {
	return (target);	
}


