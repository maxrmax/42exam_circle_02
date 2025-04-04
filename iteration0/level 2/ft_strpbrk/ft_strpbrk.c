// Assignment name	: ft_strpbrk
// Expected files	: ft_strpbrk.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strpbrk
// (man strpbrk).

// The function should be prototyped as follows:

// char	*ft_strpbrk(const char *s1, const char *s2);

// DESCRIPTION
//      The strpbrk() function locates in the null-terminated string s the first occurrence of any
//		character in the string charset and returns a pointer to this character.  If no characters
//		from charset occur anywhere in s strpbrk() returns NULL.

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s2[j] == s1[i])
				return ((char *)&s1[i]); // const, cast necessary
			j++;
		}
		i++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*str;
// 	char	*set;

// 	str = "teststring";
// 	set = " "; //< will/should segfault both
// 	printf("%s\n", ft_strpbrk(str, set));
// 	printf("%s\n", strpbrk(str, set));
// }
