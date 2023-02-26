#ifndef ARRAY_CLASS_HPP
# define ARRAY_CLASS_HPP

#include <iostream>
#include <string>

template <typename T>
class Array
{
	public:
		////	Constructors	////	////	////

		Array<T> () : _tab(NULL), _arr_len(0)//empty array ??
		{ }

		Array<T> (unsigned int n) : _tab(new T[n]), _arr_len(n)
		{ }

		Array(const Array<T> &other) : _tab(NULL)
		{
			*this = other;
		}

		~Array<T> ()
		{
			if (_tab)
				delete [] _tab;
		}

		////	Overloads	////	////	////

		// = //
		Array & operator=(const Array<T> &other)
		{
			//une reference peut elle etre NULL

			if (this == &other)
				return (*this);

			if (_tab)
				delete [] _tab;

			_arr_len = 0;
			_tab = NULL;

			_arr_len = other._arr_len;

			if (_arr_len == 0)
				return *this;
			else {

				_tab = new T[_arr_len];
				for (int i = 0; i < _arr_len; i++) {
					_tab[i] = other._tab[i];
				}

				return (*this);
			}

		}

		// ] //
		T & operator[](const int &index) {

			//test limits

			if (index < 0 || index >= _arr_len)
				throw(badIndex());

			std::cout << "OVERLOADS MODIF called" << std::endl;

			return (_tab[index]);
		}

		const T operator[](const int &index) const { //pk jamais appellee

			//test limits

			if (index < 0 || index >= _arr_len)
				throw(badIndex());

			std::cout << "OVERLOADS CONST called" << std::endl;
			return (_tab[index]);
		}



		////	Other	////	////	////B

		//// exception
		class	badIndex : public std::exception
		{
			public:
				virtual char const * what(void) const throw() {
					return "badIndex : index is out of bounds";
				}
		};
		
		//accessor
		unsigned int	size(void) const {
			return (_arr_len);
		}

	private:

		T *		_tab;
		int	_arr_len;

};

#endif /* ARRAY_CLASS_HPP */
