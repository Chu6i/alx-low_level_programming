#include"function_pointers.h"

/**
 * array_iterator - exe a func given as a parameter on each element of an array
 * @array: Array to print from
 * @size: size of the array
 * @action: pointer to the func
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;

	if (action == NULL || array == NULL)
	{
		return;
	}
	else
	{
		for (count = 0; count < size; count++)
		{
			action(array[count]);
		}
	}
}
