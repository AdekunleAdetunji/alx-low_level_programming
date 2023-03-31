#include <stdio.h>
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
 * string_toupper - Converts all lowercase letters in a string to uppercase
 * @s: The address of the string array
 *
 * Return: Returns a void value
 */
char *string_toupper(char *s)
{
	int i, len;

	len = count(s);
	for (i = 0; i < len; i++)
	{
		if (s[i] >= 98 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
