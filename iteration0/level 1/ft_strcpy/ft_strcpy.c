// Assignment name  : ft_strcpy
// Expected files   : ft_strcpy.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strcpy (man strcpy).

// Your function must be declared as follows:

// char    *ft_strcpy(char *s1, char *s2);

char	*ft_strcpy(char *dst, char *src)
{
	int	i;

	if (!src)
		return (0);
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

// #include <unistd.h>

// int	main(void)
// {
// 	char *str = "idk man..";
// 	char dst[20];
// 	ft_strcpy(dst, str);
// 	for (int i = 0; dst[i]; i++)
// 	{
// 		write(1, &dst[i], 1);
// 	}
// 	write(1, "\n", 1);
// }