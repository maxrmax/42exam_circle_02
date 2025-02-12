// Assignment name  : ft_atoi_base
// Expected files   : ft_atoi_base.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str (base N <= 16)
// to an integer (base 10) and returns it.

// The characters recognized in the input are: 0123456789abcdef
// Those are, of course, to be trimmed according to the requested base. For
// example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

// Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

// Minus signs ('-') are interpreted only if they are the first character of the
// string.

// Your function must be declared as follows:

// int	ft_atoi_base(const char *str, int str_base);

#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == 9 || str[i] == 10 || str[i] == 11 || str[i] == 12
		|| str[i] == 13 || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] && ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A'
				&& str[i] < ('A' + str_base - 10)) || (str[i] >= 'a'
				&& str[i] < ('a' + str_base - 10))))
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = (result * str_base) + (str[i] - '0');
		else if (str[i] >= 'a' && str[i] <= 'f')
			result = (result * str_base) + (str[i] - 'a' + 10);
		else if (str[i] >= 'A' && str[i] <= 'F')
			result = (result * str_base) + (str[i] - 'A' + 10);
		i++;
	}
	return (result * sign);
}

#include <stdlib.h>

int	main(int ac, char **av)
{
	printf("%s - %s\n", av[1], av[2]);
	printf("%d\n", ft_atoi_base(av[1], atoi(av[2])));
}
