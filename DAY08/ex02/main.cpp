#include "MutantStack.hpp"

#include <iostream>
#include <string>

#include <deque>
#include <list>
#include <vector>
#include <stack>

int	main(void)
{
			/////////////// main personnel ////////////////

			std::cout << std::endl << "/////////////// Main Personnel ///////////////" << std::endl;
	{
		////	Creation MutantStack type vector<int>	////

		std::cout << std::endl << "---------- Creation d'une MutantStack de type < int, std::vector<int> > " << std::endl << std::endl;

		//creation MutantStack
		MutantStack< int, std::vector<int> > first;

		std::cout << "Remplissage avec les valeurs 42 - 84 - 168" << std::endl << std::endl;
		first.push(42);
		first.push(84);
		first.push(168);

		////	Utilisation begin() et end()	////

		//begin
		std::cout << "Obtention d'un iterateur 'begin' sur cette stack grace a la fonction begin() de MutantStack" << std::endl << std::endl;
		MutantStack< int, std::vector<int> >::iterator begin = first.begin();

		std::cout << "Valeurs obtenues grace a begin" << std::endl;

		std::cout << "*begin = [" << *begin  << "] *(begin + 1) = [" << *(begin + 1) << "]" << std::endl << std::endl;

		//end
		std::cout << "Obtention d'un iterateur 'end' grace a la fonction end() de MutantStack" << std::endl;
		MutantStack< int, std::vector<int> >::iterator end = first.end();

		std::cout << "Valeurs obtenues grace a end :" << std::endl;
		std::cout << "*(end - 1)  = " << *(end - 1) << " *(end - 2) = " << *(end - 2) << std::endl << std::endl;

		////	constance iterators	////

		//iterateur constant
		std::cout << "Creation d'un iterateur constant :" << std::endl;

		MutantStack< int, std::vector<int> >::const_iterator const_begin = first.begin();
		std::cout << "*const_begin = " << *const_begin << std::endl;
		std::cout << std::endl << "Voir le code pour cette partie" << std::endl << std::endl;

		//essayer de modifier l'iterateur constant provoquera une erreur de compilation :
		//(*const_begin) = 45;

		//alors qu'avec l'iterateur non const nous pouvons :
		*begin = 888;
		std::cout << "Maintenant le premier nombre est devenu = " << *first.begin() << std::endl << std::endl;


		////	Constructeur par copie et operator=	////

		std::cout << "---------- Utilisation constructeur par copie et operateur=" << std::endl << std::endl;

		// copy constructor
		std::cout << "Creation d'une seconde MutantStack a partir de la premiere" << std::endl << std::endl;
		MutantStack< int, std::vector<int> > second(first);

		std::cout << "Valeurs contenues :" << std::endl;
		begin = second.begin();
		std::cout << *begin << " - " << *(begin + 1) << " - " << *(begin + 2) << std::endl << std::endl;

		std::cout << "Creation d'une troisieme MutantStack puis assignation avec operator= :" << std::endl;
		MutantStack< int, std::vector<int> > third;

		third = first;
		begin = third.begin();
		std::cout << *begin << " - " << *(begin + 1) << " - " << *(begin + 2) << std::endl << std::endl;
	}

			/////////////// main sujet ////////////////

	{
			std::cout << std::endl << "/////////////// Main du sujet ///////////////" << std::endl << std::endl;
			std::cout << "Sans preciser de conteneur : (conteneur par defaut = deque)" << std::endl << std::endl;
		MutantStack<int> mstack;
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
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
		std::cout << std::endl << "Avec le conteneur vector :" << std::endl << std::endl;
	{
		MutantStack< int , std::vector<int> > mstack;
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
		MutantStack< int, std::vector<int> >::iterator it = mstack.begin();
		MutantStack< int, std::vector<int> >::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack< int, std::vector<int> > s(mstack);
			
	}

		std::cout << std::endl << "Avec le conteneur list :" << std::endl << std::endl;
	{
		MutantStack< int , std::list<int> > mstack;
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
		MutantStack< int, std::list<int> >::iterator it = mstack.begin();
		MutantStack< int, std::list<int> >::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack< int, std::list<int> > s(mstack);
			
	}

	return 0;
}

