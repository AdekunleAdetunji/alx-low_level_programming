#include <math.h>
#include "search_algos.h"

/**
 * jump_search - search for an element in an ordered list using jump
 * search algorithm
 * @array: The array to be searched
 * @size: The size of the array
 * @value: The value to be searched for
 * Return: The index in which the value is found or -1 if val not in array
 */
int jump_search(int *array, size_t size, int value)
{
	size_t minIdx, maxIdx;

	if (!array)
		return (-1);

	maxIdx = 0;
	while (value > array[maxIdx] && maxIdx <= size)
	{
		printf("Value checked array[%li] = [%i]\n", maxIdx,
		       array[maxIdx]);
		minIdx = maxIdx;
		maxIdx = maxIdx + sqrt(size);
	}

	printf("Value found between indexes [%li] and [%li]\n", minIdx, maxIdx);
	if (maxIdx <= size)
		for (; minIdx <= maxIdx; minIdx++)
		{
			printf("Value checked array[%li] = [%i]\n", minIdx,
			       array[minIdx]);
			if (array[minIdx] == value)
				return (minIdx);
		}

	return (-1);
}
