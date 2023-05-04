#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: The binary number under consideration
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	int i, mask, num_bits = sizeof(n) * 8;

	mask = 1 << (num_bits - 1);

	for (i = 0; i < (num_bits - 1); i++)
	{
		if ((n & mask) != 0)
			break;
		n <<= 1;
	}
	for (i = i; i < num_bits; i++)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		n <<= 1;
	}
}
