#include "main.h"

/**
 * flip_bits - returns the number of bits needed
 * @n: number one.
 * @m: number two.
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x;

	for (x  = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		x++;
	}
	return (x);
}
