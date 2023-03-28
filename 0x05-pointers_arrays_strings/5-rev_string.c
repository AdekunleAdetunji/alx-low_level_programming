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
	return count;
}

/**
 * rev_string - reverses the string in a memory address
 * @s: The address holding the string
 *
 * Return: Returns a void value
 */
void rev_string(char *s)
{
	int i, half, len;
	char temp_a, temp_b;

	len = count(s);
	half = len / 2;
	for (i = 0; i < half; i++)
	{
		temp_a = *(s + i);
		temp_b = *(s + (len - 1 - i));
		*(s + i) = temp_b;
		*(s + len - 1 - i) = temp_a;
	}
}
