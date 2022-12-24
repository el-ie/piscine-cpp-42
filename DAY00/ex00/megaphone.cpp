#include <iostream>

int	main(int argc, char** argv)
{
	(void)argc;
	std::string str;

	str.reserve(1024);

	if (!argv[1]) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}

	for (int i = 1; argv[i]; ++i) {
		str.append(argv[i]);
	}

	for (int i = 0; i < (int)str.size(); ++i) {
		str.at(i) = std::toupper(str.at(i));
	}

	std::cout << str << std::endl;

	return (0);
}
