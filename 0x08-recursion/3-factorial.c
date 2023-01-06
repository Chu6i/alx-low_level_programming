#include "main.h"
/**
 * factorial - A func that returns the fac. of a number
 * @n: inputed number
 * Return: -1 for an error or the fac of a given number for sucess
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
