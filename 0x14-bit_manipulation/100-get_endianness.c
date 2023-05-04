#include "main.h"

/**
 * get_endianness - checks for the endianness of a system
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int i;
	char *c;

	c = (char *) &i;

	if (c[0])
		return (1);

	return (0);
}
