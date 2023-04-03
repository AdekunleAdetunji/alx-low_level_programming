#include <stddef.h>
/**
 * _strstr - Locates a substring in a string
 * @haystack: The target string we are searching in
 * @needle: The string we are searching for
 * Return: Returns the pointer to the first occurrence of the string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, ind;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		ind = 0;
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] == needle[j])
					ind = 1;
				else
					ind = 0;
			}
		}
		if (ind)
			return (haystack + i);
	}
	return (NULL);
}
