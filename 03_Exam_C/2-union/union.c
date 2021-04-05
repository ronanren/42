#include <unistd.h>
#include <stdbool.h>
#include <stdio.h>

int	inString(char *tab, char value, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i] == value)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (inString(argv[1], argv[1][i], i) == 0)
				write(1, &argv[1][i], 1);
			i++;
		}
		while (argv[2][j])
		{
			if (inString(argv[2], argv[2][j], j) == 0
					&& inString(argv[1], argv[2][j], i) == 0)
				write(1, &argv[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
