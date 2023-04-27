#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of an existing linked list
 * @head: The node under consideration
 * @str: The string that is to be contained in our node
 * Return: The address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dupstr;
	list_t *mem;

	if (head == NULL)
	{
		return (NULL);
	}

	mem = malloc(sizeof(list_t));
	if (mem == NULL)
	{
		return (NULL);
	}

	dupstr = strdup(str);
	if (dupstr == NULL)
	{
		free(mem);
		return (NULL);
	}

	mem->str = dupstr;
	mem->len = strlen(dupstr);
	mem->next = NULL;

	if (*head == NULL)
	{
		*head = mem;
	}
	else
	{
		mem->next = (*head)->next;
		(*head)->next = mem;
	}

	return (mem);
}
