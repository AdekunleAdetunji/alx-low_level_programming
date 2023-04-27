#include "lists.h"

/**
 * add_node_end - Add a new node to a list
 * @head: The address of the linked list
 * @str: The string to be contained in the node str section
 * Return: The address of the node added
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	char *dupstr;
	list_t *mem, *temp;

	if (head == NULL)
		return (NULL);

	dupstr = strdup(str);
	if (dupstr == NULL)
		return (NULL);

	mem = malloc(sizeof(list_t));
	if (mem == NULL)
	{
		free(mem);
		return (NULL);
	}
	mem->str = dupstr;
	mem->len = strlen(dupstr);
	mem->next = NULL;

	if ((*head) == NULL)
	{
		(*head) = mem;
	}
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
