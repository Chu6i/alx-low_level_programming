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
double doubleType;
char charType;
	printf("size of int: %zu bytes\n", sizeof(intType));
	printf("size of float: %zu bytes\n", sizeof(floatType));
	printf("size of double: %zu bytes\n", sizeof(doubleType));
	printf("size of char: %zu bytes\n", sizeof(charType));
return (0);
}
