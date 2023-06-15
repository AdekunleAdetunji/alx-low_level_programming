#include "lists.h"

/**
 * print_dlistint - prints the nodes in a doubly linked list
 * @h: The head node of the linked list
 * Return: The size of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *temp;

	temp = h;
	for (i = 0; temp != NULL; i++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (i);
}
