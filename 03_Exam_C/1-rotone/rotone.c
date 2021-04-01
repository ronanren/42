#include <unistd.h>
#include <stdio.h>

int	rotone(char letter)
{
	int	index;

	index = letter;
	if (letter >= 'a' && letter <= 'z')
		index = (letter - 'a' + 1) % 26 + 'a';
	else if (letter >= 'A' && letter <= 'Z')
		index = (letter - 'A' + 1) % 26 + 'A';
	return (index);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	value;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			value = rotone(argv[1][i]);
			write(1, &value, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
