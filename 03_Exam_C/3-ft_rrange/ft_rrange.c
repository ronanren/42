#include <stdio.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*tab;
	int	i;
	int	j;

	tab = (int *)malloc((end - start + 1) * sizeof(int));
	i = start;
	j = 0;
	while (i <= end)
	{
		tab[j] = i;
		i++;
		j++;
	}
	return (tab);
}

int	main(void)
{
	printf("%d", ft_rrange(-2, 2)[1]);
	return (0);
}
