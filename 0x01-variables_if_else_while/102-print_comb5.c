#include<stdio.h>
/**
 *main - A that prints all possible combo of 2 digits
 *
 *Return: 0
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 98; a++)
	{
		for (b =a + 1; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if ((a == 98) && (b == 99))
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
