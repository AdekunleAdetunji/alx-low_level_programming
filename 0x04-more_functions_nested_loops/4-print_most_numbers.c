#include "main.h"

/**
 * print_most_numbers - print numbers between 0 and 9 except 2 and 4
 * Return: Return null value
 */
void print_most_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
			_putchar('0' + c);
	}
	_putchar('\n');
}
