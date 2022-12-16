#include "main.h"

/**
* print_diagonal - A function that draws a diagonal line on the terminal
* @n: integer argument
*/

void print_diagonal(int n)
{
	int d;
	int s;

	if (n > 0)
	{
		for (d = 0; d < n; d++)
		{
			for (s = 0; s < d; s++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar(10);
		}
	}
	else
	{
	_putchar(10);
	}
}
