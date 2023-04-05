#include "main.h"
/**
 * _puts_recursion - Prints a string using recursion
 * @s: The string to be supplied to the function
 * Return: Returns a void character
 */

void _puts_recursion(char *s)
{
	if (*(s) == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
