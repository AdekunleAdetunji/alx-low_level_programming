#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of characters and initializes it with a
 * char
 * @size: The amount of memory size to be allocated
 * @c: Character to initialize each memory with
 * Return: Returns 0 or 1
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *mem;

	if (size < 1)
		return (NULL);

	mem = malloc(size);
	if (mem == NULL)
		return (NULL);
	
	for (i = 0; i < (int) size; i++)
	{
		mem[i] = c;
	}
	return (mem);
}
