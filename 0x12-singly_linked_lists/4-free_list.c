#include "lists.h"

/**
 * main_free - The function that does the memory freeing
 * @node:The node which we are to free
 * Return: Void
 */
list_t *main_free(list_t *node)
{
	list_t *temp;

	free(node->str);
	temp = node->next;
	free(node->next);
	free(node);
	return (temp);
}

/**
 * free_list - frees the memory occupied by the linked list
 * @head: The head node of the linked list we want to free
 * Return: Returns a void value
 */
void free_list(list_t *head)
{
	int i;

	if (head == NULL)
		return;

	for (i = 0; head != NULL; i++)
	{
		head = main_free(head);
	}
}
