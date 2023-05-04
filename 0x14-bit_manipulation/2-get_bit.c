#include "main.h"

/**
 * get_bit - prints the bit at a particular index
 * @n: The integer value we are considering
 * @index: The index of the bit we want to print
 * Return: The bit at a particular index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, mask, num_of_bits;

	num_of_bits = sizeof(n) * 8;

	mask = 1 << (num_of_bits - 1);

	for (i = 0; i < num_of_bits; i++)
	{
		if ((mask & n) != 0)
			break;
		mask >>= 1;
	}

	if ((i + index) > num_of_bits)
		return (-1);

	return ((n >> index) & 1);
}
