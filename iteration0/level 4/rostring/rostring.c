// Assignment name  : rostring
// Expected files   : rostring.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays this string after rotating it
// one word to the left.

// Thus, the first word becomes the last, and others stay in the same order.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string.

// Words will be separated by only one space in the output.

// If there's less than one argument, the program displays \n.

// Example:

// $>./rostring "abc   " | cat -e
// abc$
// $>
// $>./rostring "Que la      lumiere soit et la lumiere fut"
// la lumiere soit et la lumiere fut Que
// $>
// $>./rostring "     AkjhZ zLKIJz , 23y"
// zLKIJz , 23y AkjhZ
// $>
// $>./rostring "first" "2" "11000000"
// first
// $>
// $>./rostring | cat -e
// $
// $>
#include <unistd.h>

int	main(int ac, char **av)
{
	char *str;        // to easier iterate over the string
	char *word_start; // start of the first word
	char *word_end;   // end of the first word
	if (ac > 1) // need more than 1 argument
	{
		str = av[1];                        // assign
		while (*str == ' ' || *str == '\t') // if space or tab, increment
			str++;
		word_start = str; // start of the first word
							// iterate over first word until end
		while (*str && *str != ' ' && *str != '\t')
			str++;
		word_end = str;                     // asign position as end of word
		while (*str == ' ' || *str == '\t') // skip unnecessary spaces/tabs
			str++;
		if (*str) // if char pointed to is not \0
		{
			// as long as char pointed to is not \0
			while (*str)
			// if space iterate over it and print a single space,
			// else write the current char
			{
				if (*str == ' ' || *str == '\t') // if space or tab in string
				{
					// as long as space or tab in string, iterate
					while (*str == ' ' || *str == '\t')
						str++;
					if (*str) // if its not \0, print a single space
						write(1, " ", 1);
				}
				else // else write the string
				{
					write(1, str, 1);
					str++;
				}
			}
			// write extra space for the first word now at the end
			write(1, " ", 1);
		}
		while (word_start < word_end) // loop to write first word at the end now
		{
			write(1, word_start, 1);
			word_start++;
		}
	}
	write(1, "\n", 1); // new line cause we like it
}
