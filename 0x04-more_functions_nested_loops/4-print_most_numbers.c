#include "main.h"

/**
* print_most_numbers - A function that numbera from 0-9, execpt 2 and 4
*/

void print_most_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		if (num != 50 && num != 52)
		{
		_putchar(num);
		}
	}

	_putchar(10);
}
