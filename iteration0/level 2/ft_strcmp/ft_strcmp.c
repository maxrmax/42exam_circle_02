// Assignment name  : ft_strcmp
// Expected files   : ft_strcmp.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcmp (man strcmp).

// Your function must be declared as follows:

// int    ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0)
		i++;
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;

// 	str1 = "test strng1";
// 	str2 = "test strng121";
// 	printf("%d\n", ft_strcmp(str1, str2));
// 	printf("%d\n", strcmp(str1, str2));
// }
