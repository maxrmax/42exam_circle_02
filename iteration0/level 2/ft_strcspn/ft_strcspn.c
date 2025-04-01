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

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	// original strcspn doesn't NULL check
	// if (!s || !reject)
	// 	return (0);
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
// 	char	*reject;

// 	str = "teststring";
// 	reject = NULL; < will/should segfault both
// 	printf("%zu\n", ft_strcspn(str, reject));
// 	printf("%zu\n", strcspn(str, reject));
// }
