// Assignment name  : print_hex
// Expected files   : print_hex.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a positive (or zero) number expressed in base 10,
// and displays it in base 16 (lowercase letters) followed by a newline.

// If the number of parameters is not 1, the program displays a newline.

// Examples:

// $> ./print_hex "10" | cat -e
// a$
// $> ./print_hex "255" | cat -e
// ff$
// $> ./print_hex "5156454" | cat -e
// 4eae66$
// $> ./print_hex | cat -e
// $
#include <unistd.h>

void	print_hex(unsigned int n)
{
	char	*str;

	str = "0123456789abcdef";
	if (n >= 16)
		print_hex(n / 16);
	write(1, &str[n % 16], 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	n;

	if (ac == 2)
	{
		i = 0;
		n = 0;
		while ((av[1][i] >= 9 && av[1][i] <= 13) || (av[1][i] == 32))
			i++;
		while (av[1][i] == '+' || av[1][i] == '-')
			if (av[1][i++] == '-')
				return (write(1, "\n", 1), 0);
		while (av[1][i] && (av[1][i] >= '0' && av[1][i] <= '9'))
			n = (n * 10) + (av[1][i++] - '0');
		print_hex(n);
	}
	write(1, "\n", 1);
}

// cool alternative way to non recursivly print hex
// if (n == 0)
//		write(1, "0", 1);
// i = 1;
// while (i * 16 <= n)
// 	i *= 16;
// while (i > 0)
// {
// 	write(1, &str[n / i], 1);
// 	n %= i;
// 	i /= 16;
// }