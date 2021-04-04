#include <unistd.h>
#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	largest;
	int	i;

	if (len == 0)
		return (0);
	i = 1;
	largest = tab[0];
	while (i < len)
	{
		if (largest < tab[i])
			largest = tab[i];
		i++;
	}
	return (largest);
}

int	main(void)
{
	int	tab[4];

	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	printf("%d", max(tab, 4));
	return (0);
}
