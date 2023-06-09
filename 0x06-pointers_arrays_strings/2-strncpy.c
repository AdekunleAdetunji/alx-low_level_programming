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
 * _strncpy - copies a string to another string
 * @dest: The destination string we want to concatenate strings to
 * @src: The string that is to be concatenated to the destination string
 * @n: The number of characters to be copied to dest
 *
 * Return: Returns a pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, dest_len, src_len;

	dest_len = count(dest);
	src_len = count(src);
	for (i = 0; i < src_len && i < n; i++)
	{
		dest[i] = src[i];
	}
	if (src_len < n)
	{
		for ( ; i < dest_len && i < n; i++)
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
