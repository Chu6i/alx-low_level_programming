#include"main.h"
/**
 * _pow_recursion - A func that print a no to the power of another no.
 * @x: the inputed number
 * @y: the inputed no. raised to the power
 * Return: -1 if it is an error or value of x**y if sucess
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
