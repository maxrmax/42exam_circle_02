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

int	nbr_inbase(char c, int base)
{
	if (base <= 10)
		return (c >= '0' && c <= '9');
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= ('A' + base - 10))
		|| (c >= 'a' && c <= ('a' + base - 10)));
}

// int	nbr_inbase(char c, int base)
// {
// 	char	*lcbase;
// 	char	*ucbase;
// 	int		i;

// 	// Define the base
// 	lcbase = "0123456789abcdef";
// 	ucbase = "0123456789ABCDEF";
// 	i = 0;
// 	// Loop through the base and check if the character is valid
// 	while (i < base)
// 	{
// 		// If the character is found in the base, return 1
// 		if (c == lcbase[i] || c == ucbase[i])
// 			return (1);
// 		i++;
// 	}
// 	return (0);
}

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
	if (str[i] == '+' && str[i + 1] != '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i] && nbr_inbase(str[i], str_base))
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

int	main(void)
{
	printf("%d\n", ft_atoi_base("1FFF", 10));
}
