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

	if (!src)
		return (0);
	i = 0;
	while (src[i])
		i++;
	dup = malloc((i + 1) * sizeof(char));
	if (!dup)
		return (NULL);
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
// 	char	*str;
// 	char	*s2;

// 	str = "test string";
// 	s2 = strdup(str);
// 	printf("or: %s\n", s2);
// 	free(s2);
// 	s2 = ft_strdup(str);
// 	printf("ft: %s\n", s2);
// 	free(s2);
// }
