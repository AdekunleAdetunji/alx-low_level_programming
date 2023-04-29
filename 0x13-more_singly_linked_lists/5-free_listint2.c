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
 * free_listint2 - frees the memory allocate
	main_free(*h);d to each node and set head
 * to null
 * @h: The address of the linked list
 * Return: Void
 */
void free_listint2(listint_t **h)
{
	int i;
	if (h == NULL)
		return;

	for (i = 0; (*h)->next != NULL; i++)
		*h = main_free(*h);
	*h = main_free(*h);
}
