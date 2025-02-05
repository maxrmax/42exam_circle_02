// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// The function should be prototyped as follows:

// size_t	ft_strcspn(const char *s, const char *reject);
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;
// 	char	*str2;
// 	size_t	x;

// 	str = "acbcd";
// 	str2 = "123";
// 	x = strcspn(str, str2);
// 	printf("or: %zu\n", x);
// 	x = ft_strcspn(str, str2);
// 	printf("ft: %zu\n", x);
// }
