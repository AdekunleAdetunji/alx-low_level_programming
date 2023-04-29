#include "lists.h"

/**
 * print_listint - Prints the elements of a linked list
 * @h: The linked list under consideration
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}

	return (i);
}
