#include <stddef.h>
/**
 * _strpbrk - Searches for the first occurence of a string character in another
 * string
 * @s: The string we are checking for substring in
 * @accept: The substring we are checking for
 * Return: Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, ind;

	for (i = 0; s[i] != '\0'; i++)
	{
		ind = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				ind = 1;
		}
		if (ind == 1)
			return (s + i);
	}
	return (NULL);
}
