#include "lists.h"

/**
 * sum_listint - sum the contents of the data phases in the nodes of a L->L
 * @head: The head node of the linked list
 * Return: An integer value or NULL for an empty L->L
 */
int sum_listint(listint_t *head)
{
	int i, sum = 0;
	listint_t *temp;

	temp = head;
	for (i = 0; temp != NULL; i++)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
