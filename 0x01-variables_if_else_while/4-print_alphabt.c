#include<stdio.h>
/**
 * main -A program that prints all lower case alpha except some
 *
 * Return: 0
 */

int main(void)
{
	char alpha = 'a';

	for (; alpha <= 'z'; alpha++)
	{
	if (alpha != 'q' && alpha != 'e')
	putchar(alpha);
	}
	putchar(10);
	return (0);
}
