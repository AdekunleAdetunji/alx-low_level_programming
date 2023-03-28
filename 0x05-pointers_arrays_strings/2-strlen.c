#include "main.h"
/**
 * _strlen - Prints the length of a string
 * @s - memory address of string
 *
 * Return: Return a void value
 */
int _strlen(char *s)
{
	int i, count;

	count = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		count++;
	}
	return (count);
}
