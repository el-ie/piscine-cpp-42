#include <iostream>

int	main(int argc, char**	argv)
{
	std::string bertrand;

	bertrand.reserve(1024);

	if (!argv[1]) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	for (int i = 1; argv[i]; ++i) {
		bertrand.append(argv[i]);
	}

	for (int i = 0; i < bertrand.size(); ++i) {
		bertrand.at(i) = std::toupper(bertrand.at(i));
	}

	std::cout << bertrand << std::endl;

	return (0);
}
