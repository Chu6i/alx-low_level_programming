#include"main.h"
/**
* _strlen - A function that returns the length of a string
* @s: the inputed string
* Return: Number of bytes
*/

int _strlen(char *s)
{
	int n;

	for (n = 0; *(s + n) != '\0'; n++)
	{}
	return (n);
}
