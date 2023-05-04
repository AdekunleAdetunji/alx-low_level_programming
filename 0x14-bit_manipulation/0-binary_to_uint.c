#include "main.h"

/**
 * binary_to_uint - Converts a binary number to unsigned int
 * @b: The binary number string
 * Return: Unsigned integer interpretation of the binary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, power, value = 0, mul = 1;
	char digit;

	if (!b)
		return (0);

	power = strlen(b) - 1;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		digit = b[i];
		for (j = 0; j < power; j++)
			mul *= 2;
		value += atoi(&digit) * mul;
		power -= 1;
		mul = 1;
	}
	return (value);
}
