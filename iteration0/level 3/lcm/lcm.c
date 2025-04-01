// Assignment name  : lcm
// Expected files   : lcm.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function who takes two unsigned int as parameters and returns the
// computed LCM of those parameters.

// LCM (Lowest Common Multiple) of two non-zero integers is the smallest postive
// integer divisible by the both integers.

// A LCM can be calculated in two ways:

// - You can calculate every multiples of each integers until you have a common
// multiple other than 0

// - You can use the HCF (Highest Common Factor) of these two integers and
// calculate as follows:

// 	LCM(x, y) = | x * y | / HCF(x, y)

//   | x * y | means "Absolute value of the product of x by y"

// If at least one integer is null, LCM is equal to 0.

// Your function must be prototyped as follows:

//   unsigned int    lcm(unsigned int a, unsigned int b);

// Function to compute the GCD using the Euclidean algorithm
unsigned int	gcd(unsigned int a, unsigned int b)
{
	unsigned int	temp;

	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return (a);
}

// // Function to compute the LCM using the formula
// LCM(a, b) = (a * b) / GCD(a,b)
unsigned int	lcm(unsigned int a, unsigned int b)
{
	return (a * b) / gcd(a, b);
}

// unsigned int	max(unsigned int a, unsigned int b)
// {
// 	if (a > b)
// 		return (a);
// 	return (b);
// }

// unsigned int	lcm(unsigned int a, unsigned int b)
// {
// 	unsigned int	n;

// 	n = max(a, b);
// 	while (1)
// 	{
// 		if (n % a == 0 && n % b == 0)
// 			return (n);
// 		else
// 			n += max(a, b);
// 	}
// 	return (0);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 177;
// 	y = 2173;
// 	printf("%d - %d -- %d\n", x, y, lcm(x, y));
// }
