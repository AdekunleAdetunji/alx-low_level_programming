#include "main.h"

/**
 * clear_bit - set the bit at a particular index to zero
 * @n: The integer value who bit we want to change
 * @index: The position of the bit we want to change
 * Return: Returns 1 if success or -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask, num_of_bit;

	num_of_bit = sizeof(*n) * 8;
	if (num_of_bit < index)
		return (-1);

	mask = ~(1 << index);
	*n &= mask;

	return (1);
}
