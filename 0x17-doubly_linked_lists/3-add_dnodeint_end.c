#include "lists.h"

/**
 * add_dnodeint_end - add a new node to the end of a doubly linked list
 * @head: The address of the head node
 * @n: The value of the new node data filed
 * Return: The address of the new field or NULL in case of failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (!(*head))
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}

	return (new);
}
