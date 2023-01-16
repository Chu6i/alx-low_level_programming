#include "main.h"

/**
 * puts2 - A func that prints every other char in a str, followed by a new line
 * @str: A string input
 */

void puts2(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s += 2)
	{
		_putchar(str[s]);
	}
	_putchar(10);
}
