#include"main.h"
/**
 * assist - a func that returns the natural square root of a no to -sqrt_recursion
 * @n: the no to find the square root
 * @m: the square root
 * return: the natural sqrt for sucess or -1 for error
 */

int assist(int n, int m)
{
	if (n == (m * m))
	{
		return (m);
	}
	else if (n > (m * m))
	{
		return (assist(n, m + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - A func that returns the natural sqrt of a no.
 * @n: The inputed number
 * Return: -1 for error or the sqrt of the number for success
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (assist(n, 1));
	}
}
