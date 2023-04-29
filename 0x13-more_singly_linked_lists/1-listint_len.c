#include "lists.h"

/**
 * listint_len - counts the number of nodes in a L->L
 * @h: The head node
 * Return: The count of the node in the L->L
 */
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
