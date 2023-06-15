#include "lists.h"

/**
 * sum_dlistint - sums all the values in the data field of all list node
 * @head: The head of the linked list
 * Return: sum of all the node data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
