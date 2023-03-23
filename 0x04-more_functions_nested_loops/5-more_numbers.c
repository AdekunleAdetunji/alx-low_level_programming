#include "main.h"

/**
 * more_numbers - prints 10 times 1-14
 * Return: Returns a null value
 */
void more_numbers(void)
{
	int x;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 15; x++)
		{
			if (x > 9)
				_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
