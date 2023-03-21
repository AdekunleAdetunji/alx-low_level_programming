#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: Returns a null value
 */
void times_table(void)
{
	int x;
	int y;
	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			int val;
			int next;

			val = x * y;
			if (val > 9)
			{
				_putchar(val/10 + '0');
				_putchar(val % 10 + '0');
				if (x != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(val + '0');
				next = (x + 1) * y;
				if (x != 9)
				{
					_putchar(',');
					_putchar(' ');
					if (next <= 9)
						_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
