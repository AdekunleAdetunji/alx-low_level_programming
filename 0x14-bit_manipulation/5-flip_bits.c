#include "main.h"

/**
 * flip_bits - counts the number of characters that need to be changed to get
 * it from one form to the other
 * @n: The base value we are comparing against
 * @m: The value we are comparing to
 * Return: Number of bits that need to be changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count, diff, num_of_bit, mask;

	diff = n ^ m;
	count = 0;
	num_of_bit = sizeof(n) * 8;
	mask = 1 << (num_of_bit - 1);

	for (i = 0; i < num_of_bit; i++)
	{
		if ((mask & diff) != 0)
			count += 1;
		mask >>= 1;
	}

	return (count);
}
