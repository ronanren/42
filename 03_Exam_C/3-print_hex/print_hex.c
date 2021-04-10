#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int		sign;
	int		result;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] && (str[i] == '\f' || str[i] == '\t' || str[i] == ' '
			|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i++] - '0';
	}
	return (result * sign);
}

int	hex(int number)
{
	char	value;

	if (number > 16)
		hex(number / 16);
	if (number % 16 < 10)
		value = (number % 16) + '0';
	else
		value = (number % 16) + 'a' - 10;
	write(1, &value, 1);
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		hex(ft_atoi(argv[1]));
	}
	write(1, "\n", 1);
	return (0);
}
