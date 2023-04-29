#include "lists.h"

/**
 * add_nodeint - Adds another node to the beginning of a already existing node
 * @head: The address of the linked list
 * @n: The data for the data field of the new node
 * Return: Returns the address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *mem;

	if (head == NULL)
		return (NULL);

	mem = malloc(sizeof(listint_t));
	if (mem == NULL)
		return (NULL);

	mem->n = n;
	mem->next = *head;
	*head = mem;

	return (mem);
}
