// Assignment name  : ft_strdup
// Expected files   : ft_strdup.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strdup (man strdup).

// Your function must be declared as follows:

// char    *ft_strdup(char *src);

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	i = 0;
	if (!src)
		return (0);
	while (src[i])
		i++;
	dup = malloc((i + 1) * sizeof(char));
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char *str = "kolita";
// 	char *dup1 = ft_strdup(str);
// 	char *dup2 = strdup(str);
// 	printf("%s\n", dup1);
// 	printf("%s\n", dup2);
// 	dup1[0] = 'l';
// 	dup2[0] = 'l';
// 	printf("%s\n", dup1);
// 	printf("%s\n", dup2);
// }