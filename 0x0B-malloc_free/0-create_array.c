#include "main.h"
#include <stdlib.h>

/**
 * create_array - A func that creates an array of char
 * @size: The length of the char input
 * @c: The char input
 * Return: A pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptarray;
	unsigned int count;

	if (size == 0)
	{
		return (0);
	}
	ptarray = malloc(size * sizeof(char));

	if (ptarray == 0)
	{
		return (0);
	}

	for (count = 0; count < size; count++)
	{
		ptarray[count] = c;
	}
	return (ptarray);

}
