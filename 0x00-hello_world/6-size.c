#include<stdio.h>
/**
 * main -A program that uses printf to list the sizeof various functions
 *
 * Return: 0
 */

int main(void)
{
int intType;
float floatType;
long a;
long long b;
char charType;
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(a));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(b));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
