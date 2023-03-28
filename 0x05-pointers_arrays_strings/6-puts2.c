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
 * puts2 - prints even integers in a set of string
 * @str: Address of the array
 *
 * Return: Returns a null value
 */
void puts2(char *str)
{
	int i, len;

	len = count(str);
	for (i = 0; i < len; i = i + 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
