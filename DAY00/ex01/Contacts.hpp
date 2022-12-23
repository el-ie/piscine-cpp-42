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



		Contacts	create_new(void);

		static std::string	labels[FIELD_NBR];
		
		std::string	informations[FIELD_NBR];

private:

		
};

#endif
