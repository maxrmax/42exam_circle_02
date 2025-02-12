// Assignment name  : ft_swap
// Expected files   : ft_swap.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that swaps the contents of two integers the adresses of which
// are passed as parameters.

// Your function must be declared as follows:

// void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// #include <stdio.h>

// int	main(void)
// {
// 	int x = 420;
// 	int y = 69;
// 	int *a = &x;
// 	int *b = &y;
// 	printf("%d - %d\n", *a, *b);
// 	ft_swap(a, b);
// 	printf("%d - %d\n", *a, *b);
// }