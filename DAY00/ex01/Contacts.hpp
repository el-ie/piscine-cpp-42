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

		//functions
		static 			Contacts	create_new(void);
		std::string		get_information(int field); 

		//variables
		static const char*	labels[FIELD_NBR];

	private:

		std::string	_informations[FIELD_NBR];

};

#endif
