#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a doubly linked list
 * @h: The head node
 * Return: The size of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *temp;

	temp = h;
	for (i = 0; temp != NULL; i++)
		temp = temp->next;

	return (i);
}
