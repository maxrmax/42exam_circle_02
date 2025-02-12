// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:

// char    *ft_strrev(char *str);

// power of XOR bitwise, XOR swap logic, could use temp value instead
char	*ft_strrev(char *str)
{
	int	start;
	int	end;

	end = 0;
	start = 0;
	while (str[end])
		end++;
	end--;
	while (start < end)
	{
		str[start] ^= str[end] ^= str[start] ^= str[end];
		// str[end] ^= str[start];
		// str[start] ^= str[end];
		start++;
		end--;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "123456 2this";

// 	printf("%s\n", ft_strrev(str));
// }
