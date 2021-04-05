#include <unistd.h>
#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return (octet << 4 | octet >> 4);
}

int	main(void)
{
	printf("%d", swap_bits(2));
	return (0);
}
