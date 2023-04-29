#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a L->L
 * @head: The address of the head node
 * @n: The integer value to fill the data field of the new node
 * Return: The address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int i;
	listint_t *mem, *temp;

	if (head == NULL)
		return (NULL);

	mem = malloc(sizeof(listint_t));
	if (!mem)
		return (NULL);

	mem->n = n;
	mem->next = NULL;

	if (!(*head))
		*head = mem;
	else
	{
	        temp = *head;
		for (i = 0; temp->next != NULL; i++)
		{
			temp = temp->next;
		}
		temp->next = mem;
	}

	return (mem);
}
