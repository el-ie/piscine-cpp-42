#include <iostream>
#include <Array.hpp>
#include <stdlib.h>

#define MAX_VAL 750
int main(int, char**)
{
    //creation of an instance of array with MAX_VAL _tab size;
    Array<int> numbers(MAX_VAL);

    //similar creation with classic int
    int* mirror = new int[MAX_VAL];

    srand(time(NULL));

    // remplissage des deux tableaux avec des valeurs aleatoires
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
	else
		std::cout << ".";
    }

    std::cout << std::endl << std::endl;

    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//

	
    Array<std::string> phrases(10);
    
    phrases[0] = "tutur";
    phrases[1] = "tsocc";

    std::cout << phrases[1] << " masse les fesses de " << phrases[0] << std::endl;


    return 0;
}
