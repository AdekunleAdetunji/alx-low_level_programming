#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - copies a string to a new space in memory created with malloc
 * @str: The string we are to copy
 * Return: Returns either 1 or Null
 */
char *_strdup(char *str)
{
	int i, size;
	char *mem;

	if (str == NULL)
		return (NULL);

	size = strlen(str);
	mem = malloc(size + 1);
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		mem[i] = str[i];
	}
	return (mem);
}
