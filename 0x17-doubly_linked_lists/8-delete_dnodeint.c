#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: The address of the linked list head node
 * @index: The index of the target node
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	if (!head || !(*head))
		return (-1);

	temp = *head;
	for (i = 0; temp != NULL && i < index; i++)
		temp = temp->next;

	if (i < index)
		return (-1);

	if (i == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = *head;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
