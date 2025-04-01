// Assignment name	: ft_strspn
// Expected files	: ft_strspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the strspn function
// (man strspn).

// The function should be prototyped as follows:

// size_t	ft_strspn(const char *s, const char *accept);

// DESCRIPTION
//      The strspn() function spans the initial part of the null-terminated string s
//		as long as the characters from s occur in the null-terminated string charset.
//		In other words, it computes the string array
//		index of the first character of s which is not in charset,
//		else the index of the first null character.

#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;

	if (!s || !accept)
		return (0);
	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j] && s[i] != accept[j])
			j++;
		if (!accept[j])
			break ;
		i++;
	}
	return (i);
}

// #include <string.h>

// int	main(void)
// {
// 	char	*str;
// 	char	*set;

// 	str = "1";
// 	set = "1";
// 	printf("%zu\n", ft_strspn(str, set));
// 	printf("%zu\n", strspn(str, set));
// }
