#include "search_algos.h"


/**
 * bin_search - search for a element in an array using binary search
 * @array: The array to be searched
 * @lowerBound: The lower limit of the array to be searched
 * @upperBound: The upper limit of the array to be searched
 * @value: The value we are searching for
 * Return: The index at which the value is found or -1 if not found
 */
int bin_search(int *array, size_t lowerBound, size_t upperBound, int value)
{
	size_t minIdx = lowerBound, maxIdx = upperBound, middle, i;

	while (minIdx < maxIdx)
	{
		middle = (minIdx + maxIdx) / 2;
		printf("Searching in array: ");
		for (i = minIdx; i <= maxIdx; i++)
		{
			printf("%i", array[i]);
			if (i < maxIdx)
				printf(", ");
			else
				printf("\n");
		}
		if (value < array[middle])
			maxIdx = middle - 1;
		else if (value > array[middle])
			minIdx = middle + 1;
		else
			return (middle);
	}

	return (-1);
}

/**
 * exponential_search - search for a value in an array using the exponential
 * search algorithm
 * @array: The array to be searched
 * @size: The size of the array
 * @value: The value to be searched for
 * Return: The index at which the value is found, or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t lowerBound = 1, upperBound = 1;

	if (!array)
		return (-1);

	while ((upperBound < size) && (array[upperBound] < value))
	{
		lowerBound = upperBound;
		printf("Value checked array[%li] = [%i]\n", lowerBound,
		       array[lowerBound]);
		upperBound *= 2;
	}

	if (upperBound >= size)
		upperBound = size - 1;
	printf("Value found between indexes [%li] and [%li]\n", lowerBound,
	       upperBound);
	return (bin_search(array, lowerBound, upperBound, value));
}
