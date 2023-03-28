#include "main.h"
/**
 * count - counts the length of a string
 * @s: The string add we want to count its value
 *
 * Return: Returns the count of the string contained in the address
 */
int count(char *s)
{
	int i, count;

	count = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		count++;
	}
	return (count);
}

/**
 * print_rev - prints the length of a string
 * @s: The string address we want to count its value
 *
 * Return: Returns a null value
 */
void print_rev(char *s)
{
	int i, len;

	len = count(s) - 1;
	for (i = len; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
