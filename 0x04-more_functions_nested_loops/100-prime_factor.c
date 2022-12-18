#include<stdio.h>

/**
* main - Entry
*
* Return: 0
*/

int main(void)
{
	long int num = 612852475143;
	int prime;

	for (prime = 2; prime <= num; prime++)
	{
		while (num % prime == 0)
		{
			printf("%d, ", prime);
			num = num / prime;
		}
	}
			putchar(10);
	return (0);
}
