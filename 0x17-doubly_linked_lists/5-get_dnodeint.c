#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at an index
 * @head: The head node of the linked list
 * @index: The index of the node of interest
 * Return: The address of the node and NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i, j;
	dlistint_t *temp;

	temp = head;
	for (i = 0; temp != NULL; i++)
		temp = temp->next;
	if (index > i)
		return (NULL);

	temp = head;
	for (j = 0; j < index; j++)
		temp = temp->next;

	return (temp);
}
