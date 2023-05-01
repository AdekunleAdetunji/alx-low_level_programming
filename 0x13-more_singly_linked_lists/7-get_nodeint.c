#include "lists.h"

/**
 * count - count the number of nodes in a L->L
 * @h: The head of the linked list
 * Return: integer value
 */

unsigned int count(listint_t *h)
{
	int i;
	listint_t *temp;

	temp = h;
	for (i = 0; temp != NULL; i++)
	{
		temp = temp->next;
	}
	return (i);
}

/**
 * get_nodeint_at_index - get the node at the index of a linked list
 * @h: The head node of the linked list
 * @n: The index of the node of interest
 * Return: Returns either NULL or a node pointer
 */
listint_t *get_nodeint_at_index(listint_t *h, unsigned int n)
{
	unsigned int i, len;
	listint_t *temp;

	len = count(h);
	if (n > len)
		return (NULL);

	temp = h;
	for (i = 0; (temp != NULL && i < n); i++)
	{
		temp = temp->next;
	}
	return (temp);
}
