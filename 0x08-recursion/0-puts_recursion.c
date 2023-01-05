#include "main.h"
/**
 * _puts_recursion - A func. that prints a string
 * @s: the char input
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar(10);
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
