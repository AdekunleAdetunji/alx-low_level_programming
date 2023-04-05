#include "main.h"
/**
 * position - prints the character in a string position
 * @s: The string provided to the function
 * @a: The index we want to print in the string
 * Return: Return a null value
 */
void position(char *s, int a)
{
	if (a == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[a]);
	position(s, a - 1);
}
/**
 * count - counts the length of a string
 * @s: The string provided to the function
 * Return: Returns an integer value of the string length
 */
int count(char *s)
{
	if (s[0] == '\0')
		return (0);
	return (1 + count(s + 1));
}
/**
 * _print_rev_recursion - prints a string in reverse other
 * @s: The string we are to print in reverse order
 * Return: Returns a null value
 */
void _print_rev_recursion(char *s)
{
	int len;

	len = count(s) - 1;
	position(s, len);
}
