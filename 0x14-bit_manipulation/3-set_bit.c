#include "main.h"

/**
 * set_bit - sets the bit at a particular index to 1
 * @n: The integer whose bit is to be changed
 * @index: The position of the bit we are changing
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask, num_of_bits;

	num_of_bits = sizeof(*n) * 8;
	if (index > num_of_bits)
		return (-1);

	mask = 1 << index;
	*n |= mask;

	return (1);
}
