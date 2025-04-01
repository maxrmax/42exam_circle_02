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
	int	start;
	int	end;

	if (!str)
		return (NULL);
	end = 0;
	while (str[end])
		end++;
	end--;
	start = 0;
	while (start < end)
	{ // XOR swap (bitwise operation)
		str[start] ^= str[end] ^= str[start] ^= str[end];
		// same as:
		// temp = str[end];
		// str[end] = str[start];
		// str[start] = temp;
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
