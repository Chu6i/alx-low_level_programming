#include "main.h"

/**
* _puts - A func that prints a string, followed by a new line
* @str: String to be inputed
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
