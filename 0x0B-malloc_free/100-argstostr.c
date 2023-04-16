#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - concatenates the argument supplied to main
 * @ac: The count of argument supplied to main
 * @av: The argument vector
 * Return: A pointer or NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, count = 0;
	char *mem;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		count += strlen(av[i]);

	mem = malloc(sizeof(char) * count + ac + 1);
	if (!mem)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (int)strlen(av[i]); j++)
		{
			mem[j + k] = av[i][j];
		}
		mem[j + k] = '\n';
		k += j + 1;
	}
	mem[k] = '\0';
	return (mem);
}
