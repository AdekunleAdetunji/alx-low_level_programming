#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @h: The address of the linked list
 * Return: Data stored in the head node
 */
int pop_listint(listint_t **h)
{
	listint_t *temp;

	if (!h)
		return (0);

	if (!(*h))
		return (0);

	temp = *h;
	*h = (*h)->next;
	return (temp->n);
}
