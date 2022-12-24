#include "Contacts.hpp"
#include <iomanip>
#include <cstdlib>

#ifndef PHONEBOOK_CASS_H
# define PHONEBOOK_CLASS_H

class PhoneBook {

 		public:

			PhoneBook(void);
			~PhoneBook(void);

			void				add_contact(void);
			void				search_contact(void) const;
			static int			get_contact_nb(void);

		private:
			
			enum { CONTACT_MAX = 8 };
			//variables
			static Contacts		_persons[CONTACT_MAX];
			static int			_number_of_contacts;
			static int			_index;	
			//functions
			void	_display_fields_headers(void) const;
			void	_display_fields_contacts(void) const;
			void	_display_fields_one_contact(int choice) const;
};

#endif
