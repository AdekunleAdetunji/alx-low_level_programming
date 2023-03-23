#include "main.h"
/**
 * print_numbers - prints value from 0 to 9 to standard out
 * Returns: Returns a void value
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
