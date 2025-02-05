// Assignment name  : ft_atoi
// Expected files   : ft_atoi.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function, see the man.

// Your function must be declared as follows:

// int	ft_atoi(const char *str);

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	sign = 1;
	i = 0;
	result = 0;
	while (str[i] == 9 || str[i] == 10 || str[i] == 11 || str[i] == 12
		|| str[i] == 13 || str[i] == 32)
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	char	*str;
// 	int		x;

// 	str = "a1234";
// 	x = atoi(str);
// 	printf("or: %d\n", x);
// 	x = ft_atoi(str);
// 	printf("ft: %d\n", x);
// }
