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
 * insert_nodeint_at_index - insert a new node at a giving index in a L->L
 * @head: The address to the linked list
 * @idx: The index of the linked list we want to insert a new node
 * @n: The value to be stored in the data section of the new node
 * Return: Returns the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, len;
	listint_t *temp, *mem;

	if (!head)
		return (NULL);

	len = count(*head);
	if (len < idx)
		return (NULL);

	mem = malloc(sizeof(listint_t));
	if (!mem)
		return (NULL);
	mem->n = n;
	mem->next = NULL;

	if (idx == 0)
	{
		mem->next = *head;
		*head = mem;
		return (mem);
	}

	temp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
	}
	mem->next = temp->next;
	temp->next = mem;
	return (mem);
}
