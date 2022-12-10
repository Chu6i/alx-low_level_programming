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
	printf("size of int: %zu bytes\n", sizeof(intType));
	printf("size of float: %zu bytes\n", sizeof(floatType));
	printf("size of long int: %zu bytes\n", sizeof(a));
	printf("size of a long long int: %zu bytes\n", sizeof(b));
	printf("size of char: %zu bytes\n", sizeof(charType));
return (0);
}
