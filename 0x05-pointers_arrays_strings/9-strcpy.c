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
 * _strcpy - copies a string to another memory address
 * @dest: The address whose values are to be modified
 * @src: The address where values are to be copied
 *
 * Return: Returns a null value
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = count(src);
	for (i = 0; i <= len; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + len + 1) = '\0';
	return (dest);
}
