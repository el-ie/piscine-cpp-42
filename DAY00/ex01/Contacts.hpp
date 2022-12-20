#include "source.hpp"

#include "Input.hpp"

#ifndef CONTACTS_CLASS_H //check
# define CONTACTS_CLASS_H

enum	e_labels
{
	FIRST_NAME,
	LAST_NAME,
	NICKNAME,
	PHONE_NUMBER,
	DARKEST_SECRET,
	FIELD_NBR,
};

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

		static std::string	labels[FIELD_NBR];
		
		std::string	informations[FIELD_NBR];
private:

		//std::string	informations[FIELD_NBR];
		
};

#endif
