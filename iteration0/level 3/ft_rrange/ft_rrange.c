// Assignment name  : ft_rrange
// Expected files   : ft_rrange.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write the following function:

// int     *ft_rrange(int start, int end);

// It must allocate (with malloc()) an array of integers,
// fill it with consecutive
// values that begin at end and end at start (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 3, 2 and 1
// - With (-1, 2) you will return an array containing 2, 1, 0 and -1.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing -3, -2, -1 and 0.

#include <stdio.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*res;
	int	size;
	int	i;

	size = end - start;
	if (size < 0)
		size = -size;
	size += 1;
	res = malloc(size * sizeof(int));
	if (!res)
		return (NULL);
	i = 0;
	while (start <= end)
		res[i++] = end--;
	while (start >= end)
		res[i++] = end++;
	return (res);
}

// int	absolute_value(int n)
// {
// 	if (n < 0)
// 		return (-n);
// 	return (n);
// }

// int	main(int argc, char **argv)
// {
// 	int start = atoi(argv[1]);
// 	int end = atoi(argv[2]);

// 	int *arr = ft_rrange(start, end);

// 	int i = 0;
// 	while (i < 1 + absolute_value(end - start))
// 	{
// 		printf("%d", arr[i]);
// 		if (i < 1 + absolute_value(end - start) - 1)
// 			printf(", ");
// 		++i;
// 	}
// 	printf("\n");
// }