// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// The function should be prototyped as follows:

// size_t	ft_strcspn(const char *s, const char *reject);

// #include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *charset)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (charset[j])
		{
			if (charset[j] == s[i])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*charset;

// 	str = "teststring";
// 	charset = "r";
// 	printf("%zu\n", ft_strcspn(str, charset));
// 	printf("%zu\n", strcspn(str, charset));
// }
