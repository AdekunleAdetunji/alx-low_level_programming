#include "lists.h"

/**
 * list_len - returns the size of a linked list
 * @h: The linked list under consideration
 * Return: Returns the length of the linked list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 1; h->next != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
