#include "main.h"

/**
 * get_bit - A func that returns the value of a bit at a given index
 * @n: number decimal
 * @index: position to return
 * Return: bit in position index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_bits = sizeof(unsigned long int) * 8;
	if (index >= max_bits)
		return -1;
	return (n & (1UL << index)) != 0;
}

