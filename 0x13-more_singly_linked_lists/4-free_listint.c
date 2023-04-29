#include "lists.h"

/**
 * main_free - frees individual node
 * @h: The node under consideration
 * Return: The address of the next node
 */
listint_t *main_free(listint_t *h)
{
	listint_t *temp;

	temp = h->next;
	if (h)
		free(h);
	return (temp);
}

/**
 * free_listint - free the memory allocated to listint_t
 * @h: The Linked list under consideration
 * Return: Void
 */
void free_listint(listint_t *h)
{
	int i;

	for (i = 0; h->next != NULL; i++)
	{
		h = main_free(h);
	}
	main_free(h);
}
