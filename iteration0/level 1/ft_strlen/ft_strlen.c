// Assignment name  : ft_strlen
// Expected files   : ft_strlen.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that returns the length of a string.

// Your function must be declared as follows:

// int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	if (!str || !str[i])
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char *str = "PENIS";
// 	int len = ft_strlen(str);
// 	printf("%d\n", len);
// }