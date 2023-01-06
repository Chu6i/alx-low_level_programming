#include"main.h"
/**
 * _strlen_recursion - A func that prints the length of a string
 * @s: The inputed string
 * Return: Total number of the string
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s == 0)
	{
		return (0);
	}
	else
	{
		i = 1 + _strlen_recursion(s + 1);
		return (i);
	}
}
