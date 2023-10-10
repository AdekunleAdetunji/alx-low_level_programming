#include <math.h>
#include "search_algos.h"

/**
 * jump_list - use the jump search algorithm to search for a value in a
 * linked list
 * @list: The linked list containing the value being searched for
 * @size: The size of the linked list
 * @value: The value being sort after
 * Return: The pointer to the node having the value or -1 if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *temp, *prev;
	size_t lowerBound = 0, upperBound = 0, i;

	if (!list)
		return (NULL);

	temp = list;
	while ((upperBound < size) && temp && (temp->n < value))
	{
		prev = temp;
		upperBound += sqrt(size);
		for (i = 0; i < sqrt(size) && temp && temp->next; i++)
			temp = temp->next;
		printf("Value checked at index [%li] = [%i]\n",
		       upperBound, temp->n);
	}
	lowerBound = upperBound - sqrt(size);
	if (!temp->next)
		upperBound = size - 1;
	printf("Value found between indexes [%li] and [%li]\n",
	       lowerBound, upperBound);
	for (i = 0; i < sqrt(size) && prev; prev = prev->next)
	{
		printf("Value checked at index [%li] = [%i]\n",
		       prev->index,
		       prev->n);
		if (prev->n == value)
			return (prev);
	}
	return (NULL);
}
