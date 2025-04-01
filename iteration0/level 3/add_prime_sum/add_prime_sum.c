// Assignment name  : add_prime_sum
// Expected files   : add_prime_sum.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------

// Write a program that takes a positive integer as argument and displays the sum
// of all prime numbers inferior or equal to it followed by a newline.

// If the number of arguments is not 1,
// or the argument is not a positive number,
// just display 0 followed by a newline.

// Yes, the examples are right.

// Examples:

// $>./add_prime_sum 5
// 10
// $>./add_prime_sum 7 | cat -e
// 17$
// $>./add_prime_sum | cat -e
// 0$
// $>

#include <unistd.h>

int	ft_atoi(char *s)
{
	int	res;

	res = 0;
	while (*s)
		res = res * 10 + *s++ - 48;
	return (res);
}

void	put_nbr(int n)
{
	char	digit;

	if (n >= 10)
		put_nbr(n / 10);
	digit = n % 10 + '0';
	write(1, &digit, 1);
}

int	add_prime_sum(int n)
{
	int	sum;
	int	i;

	sum = 0;
	i = 2;
	while (i <= n)
	{
		if (is_prime(i) == 1)
			sum += i;
		i++;
	}
	return (sum);
}

int	is_prime(int num)
{
	int	i;

	if (num <= 1)
		return (0);
	i = 2;
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	n;

	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		if (n > 0)
			ft_putnbr(add_prime_sum(n));
		else
			write(1, "0", 1);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}
