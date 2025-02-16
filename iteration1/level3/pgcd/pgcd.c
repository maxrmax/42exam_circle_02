// Assignment name  : pgcd
// Expected files   : pgcd.c
// Allowed functions: printf, atoi, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes two strings representing two strictly positive
// integers that fit in an int.

// Display their highest common denominator followed by a newline (It's always a
// strictly positive integer).

// If the number of parameters is not 2, display a newline.

// Examples:

// $> ./pgcd 42 10 | cat -e
// 2$
// $> ./pgcd 42 12 | cat -e
// 6$
// $> ./pgcd 14 77 | cat -e
// 7$
// $> ./pgcd 17 3 | cat -e
// 1$
// $> ./pgcd | cat -e
// $
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	x;
	int	y;
	int	n;

	if (ac == 3)
	{
		x = atoi(av[1]);
		y = atoi(av[2]);
		n = y;
		while (n > 0)
		{
			if (x % n == 0 && y % n == 0)
			{
				printf("%d", n);
				break ;
			}
			n--;
		}
	}
	printf("\n");
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int ac, char **av)
// {
// 	int	x;
// 	int	y;
// 	int	temp;

// 	if (ac == 3)
// 	{
// 		x = atoi(av[1]);
// 		y = atoi(av[2]);
// 		while (y != 0)
// 		{
// 			temp = x % y;
// 			x = y;
// 			y = temp;
// 		}
// 		printf("%d", x);
// 	}
// 	printf("\n");
// }

// int	gcd(int a, int b)
// {
// 	int	temp;

// 	while (b != 0)
// 	{
// 		temp = a % b;
// 		a = b;
// 		b = temp;
// 	}
// 	return (a);
// }

// int	main(int ac, char **av)
// {
// 	if (ac == 3)
// 	{
// 		int x = atoi(av[1]);
// 		int y = atoi(av[2]);
// 		printf("%d\n", gcd(x, y));
// 	}
// 	else
// 	{
// 		printf("\n");
// 	}
// 	return (0);
// }