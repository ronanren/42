#include <unistd.h>

int	index_character(char letter)
{
	int	index;

	index = 1;
	if (letter >= 'a' && letter <= 'z')
		index = letter - 'a' + 1;
	else if (letter >= 'A' && letter <= 'A')
		index = letter - 'A' + 1;
	return (index);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	repeat;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			repeat = index_character(argv[1][i]);
			while (repeat--)
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
