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

	if (n < 15 && n > 0)
	{
		for (y = 0; y <= n; y++)
		{
			for (x = 0; x <= n; x++)
			{
				int prod, next;

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
					else if (prod > 9 && prod < 100)
						if (next < 100)
							_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
