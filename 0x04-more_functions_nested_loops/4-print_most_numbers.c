#include "main.h"
/**
* print_most_numbers - A func that prints all numbers, execpt 2 &4
*/

void print_most_numbers(void)
{
	int num;

	for (num = 48; num  <= 56; num++)
	{
		if (num != 50 && num != 52)
		{
		_putchar(num);
		}
	_putchar(10);
	}
}
