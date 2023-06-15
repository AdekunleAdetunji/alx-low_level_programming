#include "lists.h"

/**
 * print_dlistint - prints the nodes in a doubly linked list
 * @h: The head node of the linked list
 * Return: The size of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%u\n", h->n);
		temp = h->next;
	}

	return (i);
}
