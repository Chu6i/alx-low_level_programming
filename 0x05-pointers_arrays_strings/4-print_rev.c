#include "main.h"
/**
* print_rev - A func that prints string in reverse
* @s: Input string
*/

void print_rev(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		s++;
		counter++;
	}
	while (counter > 0)
	{
		s--;
		_putchar(*s);
		counter--;
	}
	_putchar(10);
}
