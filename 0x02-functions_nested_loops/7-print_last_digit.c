#include"main.h"
/**
 * print_last_digit - A func that prints the last number of a digit
 *@num: The number inputed
 *
 *Return: The last digit of the num
 */

int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar(last_digit + '0');

	return (last_digit);
}
