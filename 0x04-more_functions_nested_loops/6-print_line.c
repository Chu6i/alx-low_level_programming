#include "main.h"

/**
* print_line - A func that draws a straight line in the terminal
* @n: integer argument
*/

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(95);
		}
	}
		_putchar(10);
}
