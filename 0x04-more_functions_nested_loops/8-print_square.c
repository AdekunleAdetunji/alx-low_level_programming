#include "main.h"

/**
 * print_square - prints a square of size n
 * @n: The size of the square to be printed
 * Return: Returns a null value
 */
void print_square(int n)
{
	if (n > 0)
	{
		int x;
		int y;

		for (y = 0; y < n; y++)
		{
			for (x = 0; x < n; x++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
