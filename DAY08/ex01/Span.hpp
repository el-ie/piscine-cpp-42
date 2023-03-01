#ifndef SPAN_CLASS_HPP
# define SPAN_CLASS_HPP

#include <iostream>
#include <string>
#include <stdexcept>

#include <vector>

class Span
{
	public:
		//constructors
		Span();
		Span(unsigned int N);
		Span(const Span &other);
   	   ~Span ();
	   	//overloads
		Span & operator=(const Span &other);

		//exceptions
		class container_full : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class not_enough_elements : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		//functions
		void		addNumber(const int nb);

		int	longestSpan(void) const;
		int	shortestSpan(void) const;
		void	fill_container(void);
		void	display_span(void);
	//	int	generate_number(void);


	private:
		std::vector<int>	_container;
		unsigned int		_maxsize;
};

#endif /* SPAN_CLASS_HPP */
