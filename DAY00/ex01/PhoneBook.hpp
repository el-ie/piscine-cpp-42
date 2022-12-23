#include "source.hpp"

#include "Contacts.hpp"//bien ?
		
#ifndef PHONEBOOK_CASS_H //check
# define PHONEBOOK_CLASS_H

class PhoneBook {

 		public:

			PhoneBook(void);
			~PhoneBook(void);

			void		add_contact(void); //add const? passer en private?
			static int			get_contact_nb(void);

			void	search_contact(void) const;
			 Contacts	persons[8];


		private:

			static int			_number_of_contacts;
			static int			_index;

			void	_display_fields_headers(void) const;
			void	_display_fields_contacts(void) const;
			void	_display_fields_one_contact(int choice) const;
};

#endif
