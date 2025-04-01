// Assignment name  : print_bits
// Expected files   : print_bits.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
// AT THE END.

// Your function must be declared as follows:

// void	print_bits(unsigned char octet);

// Example, if you pass 2 to print_bits, it will print "00000010"

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;

	i = 8;      // 8 bits in a byte
	while (i--) // stops on 0
	{
		// check if the position it shifts to (from right to left) is 1
		// if it is 1 in octet, if is true.
		if (octet & (1 << i))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
}
