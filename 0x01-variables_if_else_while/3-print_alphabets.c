#include<stdio.h>
/**
 * main -A program that prints all the alpha in lower and upper case
 *
 * Return: 0
 */

int main(void)

{
	char ALPHA = 'A';
	char alpha = 'a';

	for (; alpha <= 'z'; alpha++)
	{
	putchar(alpha);
	}

	for (; ALPHA <= 'Z'; ALPHA++)
	{
	putchar(ALPHA);
	}
	putchar(10);
	return (0);
}
