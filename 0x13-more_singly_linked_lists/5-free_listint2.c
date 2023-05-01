#include "lists.h"

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
	listint_t *temp;

	if (h == NULL)
		return;

	for (i = 0; (*h) != NULL; i++)
	{
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}
}
