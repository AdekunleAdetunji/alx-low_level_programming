#include "search_algos.h"

/**
 * linear_search - search for an element in a list using linear search
 * algorithm
 * @array: A pointer to the array that is to be searched
 * @size: The size of the array
 * @value: The value searched for
 * Return: The index where value is found or Null if it doesn't exist
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);

	for (i = 0; (size_t) i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
