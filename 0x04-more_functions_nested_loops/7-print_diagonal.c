#include "main.h"

/**
 * print_diagonal - prints a diagonal line of length n
 * @n: The length of the diagonal line
 * Return: Returns an integer value
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int y;

		for (y = 0; y < n; y++)
		{
			int x;

			for (x = 0; x < y; x++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
