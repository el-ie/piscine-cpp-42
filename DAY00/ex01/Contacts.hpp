#include "source.hpp"

#ifndef CONTACTS_CLASS_H //check
# define CONTACTS_CLASS_H

class Contacts {

public:
		
		Contacts(void);
		~Contacts(void);

		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
		//bool	entered;
		int		contact_index;

		Contacts	create_new(void);

private:


};

#endif
