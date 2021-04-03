#include <unistd.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	last_index;

	i = 0;
	last_index = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' && argv[1][i + 1] != ' '
				&& argv[1][i + 1] != '\0')
				last_index = i;
			i++;
		}
		i = 0;
		while (argv[1][i])
		{
			if (i > last_index && argv[1][i] != ' ')
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
