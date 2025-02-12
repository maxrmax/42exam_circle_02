// Assignment name  : reverse_bits
// Expected files   : reverse_bits.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a byte, reverses it, bit by bit (like the
// example) and returns the result.

// Your function must be declared as follows:

// unsigned char	reverse_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0100  0001
//      ||
//      \/
//  1000  0010

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	int				j;
	unsigned char	result;

	result = 0;
	i = 0;
	while (i <= 7)
	{
		result = (result << 1) | ((octet >> i) & 1);
		i++;
	}
	return (result);
}
