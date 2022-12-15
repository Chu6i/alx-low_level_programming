#include "main.h"

/**
* more_numbers - A func that prints 10 times the number 1-14
*/

void more_numbers(void)
{
	int s;
	int n;

	for (s = 0; s <= 9; s++)
	{

		for (n = 0; n < 15; n++)
	{
		if (n > 9)
		{
			_putchar((n / 10) + '0');
		}
			_putchar((n % 10) + '0');
	}
	_putchar(10);
	}
}
