#include<stdlib.h>
#include"main.h"

/**
 * int *array_range - A function that creates an array of integers
 * @min: The first input of the array
 * @max: The last input of the array
 * Return: The pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptarray, size, count;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	ptarray = calloc(size, sizeof(int));

	if (ptarray == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < size; count++)
	{
		ptarray[count] = min + count;
	}

	return (ptarray);
}
