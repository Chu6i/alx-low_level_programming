#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main -A program that assign random numbers to a var.
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	if (n > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, r);
	}
	else if (n == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, r);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not O\n", n, r);
	}
	return (0);
}
