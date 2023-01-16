#include "main.h"

/**
 * puts_half - A  function that prints half of a string, followed by a new line
 * @str: The inputed string
 */

void puts_half(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
	{}
	n /= 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar(10);
}
