#include "search_algos.h"

/**
 * binary_search - search for a value in array using binary search algorithm
 * @array: The array to be searched
 * @size: The size of the array
 * @value: The value to be searched for
 * Return: The index at which the value is found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t minIdx, maxIdx, middle, i;

	minIdx = 0;
	maxIdx = size - 1;

	if (!array)
		return (-1);
	while (minIdx < maxIdx)
	{
		middle = (maxIdx + minIdx) / 2;
		printf("Searching in array: ");
		for (i = minIdx; i <= maxIdx; i++)
		{
			printf("%i", array[i]);
			if (i < maxIdx)
				printf(", ");
			else
				printf("\n");
		}
		if (array[middle] < value)
			minIdx = middle + 1;
		else if (array[middle] > value)
			maxIdx = middle - 1;
		else
			return (minIdx);
	}
	return (-1);
}
