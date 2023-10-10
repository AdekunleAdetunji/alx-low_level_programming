#include "search_algos.h"

/**
 * linear_skip - search for value in a skip list
 * @list: The linked list with express lane
 * @value: The value to be searched for
 * Return: The position in which the element is found and null if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	size_t i;
	skiplist_t *upperLimit = list, *lowerLimit;

	if (!list)
		return (NULL);

	while (upperLimit->next && upperLimit->n < value)
	{
		lowerLimit = upperLimit;
		upperLimit = upperLimit->express;
		if (upperLimit)
			printf("Value checked at index [%li] = [%i]\n",
			       upperLimit->index,
			       upperLimit->n);
		else
		{
			upperLimit = lowerLimit;
			while (upperLimit->next)
				upperLimit = upperLimit->next;
		}
	}
	printf("Value found between indexes [%li] and [%li]\n",
	       lowerLimit->index,
	       upperLimit->index);
	for (i = lowerLimit->index; i <= upperLimit->index; i++)
	{
		printf("Value checked at index [%li] = [%i]\n",
		       lowerLimit->index,
		       lowerLimit->n);
		if (lowerLimit->n == value)
			return (lowerLimit);
		lowerLimit = lowerLimit->next;
	}
	return (NULL);
}
