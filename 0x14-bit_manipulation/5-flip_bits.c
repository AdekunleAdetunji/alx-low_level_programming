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
	unsigned long int i, count, diff;

	diff = n ^ m;
	count = 0;

	for (i = 0; diff; i++)
	{
		count += (diff & 1);
		diff >>= 1;
	}

	return (count);
}
