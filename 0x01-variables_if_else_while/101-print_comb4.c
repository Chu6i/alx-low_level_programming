#include<stdio.h>
/**
 *main - A program that prints all possible different combo of three digits
 *
 *Return: 0
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if ((a >= b) || (b >= c))
				{
					continue;
				}
				putchar(a);
				putchar(b);
				putchar(c);
				if (a == '7' && b == '8' && c == '9')
				{
				putchar(10);
				}
				else
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	return (0);
}
