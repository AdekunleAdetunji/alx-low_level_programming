#include <stdio.h>

/**
 * int_index - a function that searches for an integer using function pointer
 * @size: The size of the integer array
 * @array: The integer array function is to work on
 * @cmp: The function we are to use in comparing
 * Return: Returns 0 or 1
 */
int int_index(int *array, size_t size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || !cmp)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
