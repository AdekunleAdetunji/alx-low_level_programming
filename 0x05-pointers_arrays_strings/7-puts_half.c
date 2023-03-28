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
 * puts_half - prints the last half of a string followed by a new line
 * @str: The address of the string we are considering
 *
 * Return: Returns a null value
 */
void puts_half(char *str)
{
	int i, len, half;

	len = count(str);
	half = len / 2;
	for (i = half; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
