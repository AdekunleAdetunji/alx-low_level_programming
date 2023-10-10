#include "search_algos.h"

/**
 * interpolation_search - search for a value in an array using the
 * interpolation search algorithm
 * @array: The array being searched
 * @size: The size of the array
 * @value: The search value
 * Return: The index in which the value is found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t minIdx = 0, maxIdx = size - 1, middle;

	if (!array)
		return (-1);

	middle = minIdx + ((value - array[minIdx]) * (maxIdx - minIdx) /
			   (array[maxIdx] - array[minIdx]));

	while ((array[minIdx] != array[maxIdx]) && (value >= array[minIdx]) &&
	       (value <= array[maxIdx]))
	{
		middle = minIdx + ((value - array[minIdx]) *
				   (maxIdx - minIdx) /
				   (array[maxIdx] - array[minIdx]));

		printf("Value checked array[%li] = [%i]\n", middle,
		       array[middle]);
		if (value < array[middle])
			maxIdx = middle - 1;
		else if (value > array[middle])
			minIdx = middle + 1;
		else
			return (middle);
	}

	if (value == array[minIdx])
		return (minIdx);
	else if (middle >= size)
		printf("Value checked array[%li] is out of range\n", middle);
	return (-1);
}
