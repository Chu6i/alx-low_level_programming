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
	printf("size of an int: %zu byte(s)\n", sizeof(intType));
	printf("size of a float: %zu byte(s)\n", sizeof(floatType));
	printf("size of a long int: %zu byte(s)\n", sizeof(a));
	printf("size of a long long int: %zu byte(s)\n", sizeof(b));
	printf("size of a char: %zu byte(s)\n", sizeof(charType));
return (0);
}
