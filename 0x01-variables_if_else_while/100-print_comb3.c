#include<stdio.h>
/**
 *main - A program that prints all possible different combo of two digits
 *
 *Return: 0
 */

int main(void)
{
	int m, n;

	for (m = '0'; m <= '9'; m++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			if (m >= n)
			{
				continue;
			}
			putchar(m);
			putchar(n);

			if (m == '8' && n == '9')
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

	return (0);
}
