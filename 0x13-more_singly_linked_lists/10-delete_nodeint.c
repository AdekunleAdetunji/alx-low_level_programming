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
 * delete_nodeint_at_index - delete the node at a particular index
 * @head: The address of the node
 * @index: The index of the node we want to delete
 * Return: 1 on success or -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i, len;
	listint_t *temp, *node;

	if (!head || *head == NULL)
		return (-1);

	len = count(*head);
	if (index >= len)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		temp = temp->next;
	}
	node = temp->next;
	temp->next = node->next;
	free(node);

	return (1);
}
