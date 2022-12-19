#include"main.h"
/**
* swap_int - A func that swap values of 2 integers
* @a: First integer
* @b: secound integer
*/

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
