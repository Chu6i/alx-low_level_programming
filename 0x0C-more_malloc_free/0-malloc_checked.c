#include<stdlib.h>
#include"main.h"

/**
 * malloc_checked- A function that allocates memory
 * @b: size of the input
 * Return: A pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
