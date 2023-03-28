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
 * _puts - prints the length of a string
 * @str: The string address we want to count its value
 *
 * Return: Returns a null value
 */
void _puts(char *str)
{
	int i, len;

	len = count(str);
	for (i = 0; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
