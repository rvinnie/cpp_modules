#include <iostream>

void	stringToUpper(char *str)
{
	int i;

	i = 0;
	while (str[i]) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		std::cout << str[i];
		i++;
	}
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argv[i]) {
		stringToUpper(argv[i]);
		i++;
	}
	std::cout << std::endl;
	return (0);
}
