#include "main.h"

/**
* print_triangle -A func that prints a triangle
* @size : integer argument used
*/

void print_triangle(int size)
{
	int t;
	int r;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (t = 0; t < size; t++)
		{
			for (r = 0; r < size; r++)
			{
				if ((size - t - 1) > r)
					_putchar(32);
				else
					_putchar(35);
			}
			_putchar(10);
		}
	}
}
