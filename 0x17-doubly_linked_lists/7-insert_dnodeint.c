#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a particular index
 * @head: The address of the head node of the linked list
 * @idx: The index where the new node is to be placed
 * @n: The value for the data field of the new node
 * Return: The address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *temp, *prev, *new;

	if (!h)
		return (NULL);

	temp = *h;
	for (i = 0; temp != NULL && i < idx; i++)
		temp = temp->next;

	if (idx > i)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!(*h))
	{
		*h = new;
		return (new);
	}

	if (temp == NULL)
	{
		prev = *h;
		while (prev->next != NULL)
			prev = prev->next;
		prev->next = new;
		new->prev = prev;
	}
	else
	{
		prev = temp->prev;
		temp->prev = new;
		new->prev = prev;
		new->next = temp;

		if (idx == 0)
			*h = new;
		else
			prev->next = new;
	}

	return (new);
}
