#include "main.h"
/**
* _isupper - A function that checks for uppercase char
* @c: single char input
* Return: 1 if c is uppercae, 0 if otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
