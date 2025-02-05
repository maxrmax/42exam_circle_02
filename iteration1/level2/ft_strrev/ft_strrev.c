// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:

// char    *ft_strrev(char *str);

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	i--;
	while (i > j)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		i--;
		j++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "0123456789";
	char	*s;

	s = ft_strrev(str);
	printf("%s\n", s);
}
