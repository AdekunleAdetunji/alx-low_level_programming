#include "main.h"

/**
 * print_sign - prints the sign on a number and 0 for digit zero
 * @i: integer argument to be supplied to the function
 * Return: Returns an integer value of either 1 for a + sign, 0 for a negative
 * and -1 for 0
 */
int print_sign(int i)
{
	if (i > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (i < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
