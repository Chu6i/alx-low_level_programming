#include<stdlib.h>
#include"main.h"

/**
 * _calloc - A function that allocates memory for an array
 * @nmemb: The number of inputed array.
 * @size: The size of the elements in the inputed array
 * Return: A pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptarray;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptarray = calloc(nmemb, size);

	if (ptarray == NULL)
	{
		return (NULL);
	}

	return (ptarray);

}
