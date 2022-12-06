
		
#include "Contacts.hpp"//bien ?

		
#ifndef PHONEBOOK_CLASS_H //check
# define PHONEBOOK_CLASS_H

class PhoneBook {

 		public:
		
		PhoneBook(void);
		~PhoneBook(void);

		void		add_contact(void); //add const? passer en private?

		Contacts	persons[8]; //passer en private ?

		private:

		static int			_number_of_contacts;
};

#endif
