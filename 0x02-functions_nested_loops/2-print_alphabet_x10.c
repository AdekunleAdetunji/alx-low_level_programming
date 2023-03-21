#include "main.h"

/**
 * print_alphabet_x10 - prints all lowercase alphabets in 10 lines
 * Return: returns a void value
 */
void print_alphabet_x10(void)
{
	int c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
