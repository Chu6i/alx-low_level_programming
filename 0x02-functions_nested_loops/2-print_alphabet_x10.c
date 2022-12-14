#include "main.h"

/**
* print_alphabet_x10 - Prints the lower case alphabets 10 times
*/

void print_alphabet_x10(void)
{
	int line = 0, alpha;

	while (line < 10)
	{
		alpha = 97;

		while (alpha <= 122)
		{
		_putchar(alpha);
		alpha++;
		}
	_putchar(10);
	line++;
	}
}
