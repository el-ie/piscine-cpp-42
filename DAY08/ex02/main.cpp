
#include "MutantStack.hpp"

#include <deque>
#include <list>
#include <vector>
//add all

int	main(void)
{

		////	Creation MutantStack type vector<int>	////

	std::cout << std::endl << "---------- Creation d'une MutantStack de type < int, std::vector<int> > " << std::endl << std::endl;
	MutantStack< int, std::vector<int> > first;

	std::cout << "Remplissage avec les valeurs 42 - 84 - 168" << std::endl << std::endl;
	first.push(42);
	first.push(84);
	first.push(168);

		////	Utilisation begin() et end()	////
			
	std::cout << "Obtention d'un iterateur 'begin' sur cette stack grace a la fonction begin() de MutantStack" << std::endl << std::endl;
	MutantStack< int, std::vector<int> >::iterator begin = first.begin();

	std::cout << "Valeurs obtenues grace a begin" << std::endl;

	std::cout << "*begin = [" << *begin  << "] *(begin + 1) = [" << *(begin + 1) << "]" << std::endl << std::endl;

	std::cout << "Obtention d'un iterateur 'end' grace a la fonction end() de MutantStack" << std::endl;
	MutantStack< int, std::vector<int> >::iterator end = first.end();

	std::cout << "Valeurs obtenues grace a end :" << std::endl;
	std::cout << "*(end - 1)  = " << *(end - 1) << " *(end - 2) = " << *(end - 2) << std::endl << std::endl;

/*
	
	MutantStack< int, std::vector<int> > deux(un);

	it = deux.begin();

	std::cout << "*it = " << *it  << " , " << *(it + 1) << std::endl;

	//MutantStack< int, std::vector<int> >::const_iterator itt = un.begin();
	//std::cout << "*itt = " << *itt  << " , " << *(itt + 1) << std::endl;

	MutantStack< int, std::vector<int> > trois;

	trois = deux;

	std::cout << " TROIS = " << *trois.begin() << std::endl;


	//liste.push(78);

	//std::cout << liste.test[0] << std::endl;
	*/

	return 0;
}

int maine()
{
	//MutantStack<int, std::list<int> > mstack;

{
	MutantStack<int>  mstack;


	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	//MutantStack< int, std::list<int> >::iterator it = mstack.begin();


	MutantStack<int>::iterator ite = mstack.end();
	//MutantStack< int, std::list<int> >::iterator ite = mstack.end();


	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	/*
	*/

}
	MutantStack<int, std::vector<int> >  test;

	test.push(5);
	test.push(17);
	std::cout << test.top() << std::endl;
	test.pop();
	std::cout << test.size() << std::endl;
	test.push(3);
	test.push(5);
	test.push(737);
	//[...]
	test.push(0);

	MutantStack< int, std::vector<int> >::iterator it = test.begin();
	//MutantStack< int, std::list<int> >::iterator it = test.begin();


	MutantStack< int, std::vector<int> >::iterator ite = test.end();
	//MutantStack< int, std::list<int> >::iterator ite = test.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	

	typedef std::stack<int, std::vector<int> > Mystack;
	Mystack sss(test);

	std::stack<int, std::vector<int> > s(test);

	return 0;
}
