
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	ted("TED", 149);	

	std::cout << ted.get_name() << " , " << ted.get_grade() << std::endl;

	ted.regression();


	std::cout << ted.get_name() << " , " << ted.get_grade() << std::endl;

	ted.regression();
	
	std::cout << ted.get_name() << " , " << ted.get_grade() << std::endl;

}
