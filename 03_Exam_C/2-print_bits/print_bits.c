#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int	number;
	int	n;

	number = octet;
	n = 128;
	while (n > 0)
	{
		if (n <= number)
		{
			number = number - n;
			write(1, "1", 1);
		}
		else
			write(1, "0", 1);
		n /= 2;
	}
}

int	main(void)
{
	print_bits(2);
	return (0);
}
