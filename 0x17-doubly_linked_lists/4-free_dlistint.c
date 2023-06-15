#include "lists.h"

/**
 * free_dlistint - frees the memory allocated to doubly linked list
 * @head: The head node of the doubly linked list
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	int i;
	dlistint_t *temp, *temp_next;

	temp = head;
	for (i = 0; temp != NULL; i++)
	{
		temp_next = temp->next;
		free(temp);
		temp = temp_next;
	}
}
