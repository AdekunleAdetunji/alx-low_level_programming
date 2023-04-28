#include "lists.h"

/**
 * main_free - The function that does the memory freeing
 * @node:The node which we are to free
 * Return: Void
 */
list_t *main_free(list_t *node)
{
	list_t *temp;

	if (node->str)
	{
		printf("Str: %s\n", node->str);
		free(node->str);
		printf("Str Freed\n");
	}
	/**if (node->len)
	{
		printf("Len: %i\n", (int)node->len);
		free(&(node->len));
		printf("Freed Len");
		}*/
	temp = node->next;
	if (temp)
		free(node->next);
	if (node)
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
	list_t *temp;

	if (head == NULL)
		return;

	temp = head;
	for (i = 0; temp != NULL; i++)
	{
		printf("Iter :%i\n", i);
		temp = main_free(temp);
	}
}
