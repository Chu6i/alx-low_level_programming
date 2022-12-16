#include "main.h"

/**
* print_square - A func that prints a square
* @size: argument used
*/

void print_square(int size)
{
	int l;
	int b;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}
			_putchar (10);
		}
	}
	else
	{
		_putchar(10);
	}
}
