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
 * leet - Encode the a string using the leet format
 * @s: The string to be encoded
 *
 * Return: Returns a pointer to the string
 */
char *leet(char *s)
{
	int i, j, len;
	char letter[5] = {'A', 'E', 'O', 'T', 'L'};
	char code[5] = {'4', '3', '0', '7', '1'};

	len = count(s);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == letter[j] || s[i] == (letter[j] + 32))
				s[i] = code[j];
		}
	}
	return (s);
}
