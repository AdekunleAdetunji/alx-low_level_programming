#include <stddef.h>
/**
 * _strchr - searches for the first occurrence of a character in a string
 * @s: The string we are to search for a character in
 * @c: The character we are to search for
 * Return: Returns a pointer to the first occurence of that character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != c; i++)
		continue;
	if (s[i] == '\0')
		return (NULL);
	return (s + i);
}
