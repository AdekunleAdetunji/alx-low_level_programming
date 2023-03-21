#include "main.h"

/**
 * print_alphabet - prints all lowercase alphabets
 * Return: returns a void value
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
