#include "main.h"
/**
 * _strcmp - compares two strings and returns their difference
 * @s1: The sample string
 * @s2: The string whose values are been compared to the S1
 *
 * Return: Returns an integer value of the difference
 */
int _strcmp(char *s1, char *s2)
{
	int i, diff;

	for (i = 0; s1[i] != '\0'; i++)
	{
		diff = s1[i] - s2[i];
		if (diff < 0 || diff > 0)
			return (diff);
	}
	return (diff);
}
