#include "main.h"

/**
 * print_line - prints line of length n
 * @n: length 0f line
 * Return: Returns a null value
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
