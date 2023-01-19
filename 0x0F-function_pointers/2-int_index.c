#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer.
 * @size: The number of elements in the array
 * @cmp: A pointer to the function to be used to compare values
 * @array: The set of numbers inputed
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count, compare;

	if ((array != NULL) && (cmp != NULL))
	{
		for (count = 0; count < size; count++)
		{
			compare = cmp(array[count]);
				if (compare != 0)
				{
				return(count);
				}
		}
	}
	return -1;
}
