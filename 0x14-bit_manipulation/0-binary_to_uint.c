#include "main.h"

/**
 * _strlen - A func that calculates the length of a string
 * @str: the inputed string
 * Return: The length of the string
 */

int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{}
	return (i);
}

/**
 * binary_to_uint - func that converts a bin num to an unsigned int
 * @b: the inputed binary number
 * Return: The converted integer
 */
unsigned int binary_to_uint(const char *b)
{
	int sum = 0;
	int i = 0;
	int len = _strlen(b);

	if (*b == '\0')

	for (; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		sum = (sum << 1) | (b[i] - '0');
	}
	return (sum);
}
