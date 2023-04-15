#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * memory - concatenates strings to a memory address
 * @s1 - string 1
 * @s2 - string 2
 * Return: Returns a pointer to the memory address
 */

/**
 * str_concat - concatenates two strings to a new memory address
 * @s1: The first string
 * @s2: The second string
 * Return: Null or pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, diff, size_s1, size_s2, total = 0;
	char *mem;

	if (s2 == NULL && s1 == NULL)
		return ("");

	if (s1 == NULL && s2 != NULL)
	{
		total = strlen(s2);
		mem = malloc(sizeof(char) * total + 1);
		if (!mem)
			return (NULL);
		for (i = 0; i < total; i++)
			mem[i] = s2[i];
	}
	else if (s1 != NULL && s2 == NULL)
	{
		total = strlen(s1);
		mem = malloc(sizeof(char) * total + 1);
		if (!mem)
			return (NULL);
		for (i = 0; i < total; i++)
			mem[i] = s1[i];
	}
	else
	{
		size_s1 = strlen(s1);
		size_s2 = strlen(s2);
		diff = abs(size_s1 - size_s2);
		total = size_s1 + size_s2;
		mem = malloc(sizeof(char) * total + 1);
		if (!mem)
			return (NULL);
		for (i = 0; i < total; i++)
		{
			if (i >= size_s1)
				mem[i] = s2[i + diff - size_s2];
			else
				mem[i] = s1[i];
		}
	}
	mem[i] = '\0';
	return (mem);
}
