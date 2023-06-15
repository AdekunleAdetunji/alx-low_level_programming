#include "lists.h"

/**
 * print_dlistint - prints the nodes in a doubly linked list
 * @h: The head node of the linked list
 * Return: The size of the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp)
	{
		i += 1;
		printf("%u\n", temp->n);
		temp = temp->next;
	}

	return (i);
}
