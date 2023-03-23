#include "main.h"

/**
 * print_triangle - prints a triangle of base n
 * @n: Argument for the length of the triangle
 * Return: Returns a null value
 */
void print_triangle(int n)
{
	int y;

	if (n > 0)
	{
		for (y = 1; y <= n; y++)
		{
			int stars;
			int space;

			for (space = 1; space < (n - y + 1); space++)
				_putchar(' ');
			for (stars = 1; stars < (y + 1); stars++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
