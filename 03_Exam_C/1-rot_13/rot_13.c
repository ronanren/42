#include <unistd.h>
#include <stdio.h>

int	rot13(char letter)
{
	int	index;

	index = letter;
	if (letter >= 'a' && letter <= 'z')
		index = (letter - 'a' + 13) % 26 + 'a';
	else if (letter >= 'A' && letter <= 'Z')
		index = (letter - 'A' + 13) % 26 + 'A';
	return (index);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	value;

	i = 0;
	if (argc > 1)
	{
		while (argv[1][i])
		{
			value = rot13(argv[1][i]);
			write(1, &value, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
