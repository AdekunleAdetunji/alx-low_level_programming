#include "lists.h"

/**
 * add_dnodeint - adds a nodes to the beginning of a linked list
 * @head: The address of the head node
 * @n: The data field value of the node
 * Return: The address of the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (!head)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	if (*head)
		(*head)->prev = node;

	*head = node;

	return (node);
}
