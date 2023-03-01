#ifndef MUTANTSTACK_CLASS_HPP
# define MUTANTSTACK_CLASS_HPP

#include <iostream>
#include <string>

#include <deque>
#include <list>
#include <vector>
#include <stack>

template < class T, class C = std::deque<T> >

class MutantStack : public std::stack<T, C>
{
	public:

		typedef typename std::stack<T, C>::container_type::iterator iterator;
		typedef typename std::stack<T, C>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T, C>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T, C>::container_type::const_reverse_iterator const_reverse_iterator;

		MutantStack()	{};

		MutantStack(const MutantStack &other) : std::stack<T, C>(other)	{};

		~MutantStack () {};

		MutantStack & operator=(const MutantStack &other) {
			
			std::stack<T, C>::operator=(other);
			return *this;
		}

		iterator	begin(void) {
			return (this->c.begin());
		}

		iterator	end(void) {
			return (this->c.end());
		}

		const_iterator	begin(void) const {
			return (this->c.begin());
		}

		const_iterator	end(void) const {
			return (this->c.end());
		}

		reverse_iterator	rbegin(void) {
			return (this->c.begin());
		}

		reverse_iterator	rend(void) {
			return (this->c.end());
		}

		const_reverse_iterator	rbegin(void) const {
			return (this->c.begin());
		}

		const_reverse_iterator	rend(void) const {
			return (this->c.end());
		}
};

#endif /* MUTANTSTACK_CLASS_HPP */
