#include "main.h"

/**
 * print_times_table - Prints a time table of length n
 * @n: The length of the time table
 *
 * Return: Returns a null value
 */
void print_times_table(int n)
{
	int x, y;

	if (n >= 0 && n < 15)
	{
		for (y = 0; y <= n; y++)
		{
			for (x = 0; x <= n; x++)
			{
				int prod;

				prod = x * y;
				if (prod > 9 && prod > 99)
				{
					_putchar('0' + (prod / 100));
					_putchar('0' + (prod / 10) % 10);
				}
				else if (prod > 9 && prod < 100)
				{
					_putchar('0' + (prod / 10));
				}
				_putchar('0' + (prod % 10));
				if (x != n)
				{
					seperator(x, y, prod);
				}
			}
			_putchar('\n');
		}
	}
}

/**
 * seperator - seperates two digits adding the number of spaces to use
 * depending on the value of the digit
 * @x: The value of x in the loop
 * @y: The value of y in the loop
 * @prod: The product of x and y
 *
 * Return: Returns a void value on completion
 */
void seperator(int x, int y, int prod)
{
	int next;

	_putchar(',');
	_putchar(' ');
	next = (x + 1) * y;
	if (prod < 10)
	{
		_putchar(' ');
		if (next < 10)
		{
			_putchar(' ');
		}
	}
	else if (prod > 9 && prod < 100 && next < 100)
		_putchar(' ');
}
