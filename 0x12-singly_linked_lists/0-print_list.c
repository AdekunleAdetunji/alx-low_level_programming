#include "lists.h"

/**
 * element - print the element of a linked list
 * @h: The node under consideration
 * Return: void
 */
void element(const list_t *h)
{
	int len;
	char *str;

	len = h->len;
	str = h->str;
	if (str == NULL)
	{
		str = "(nil)";
		len = 0;
	}
	printf("[%d] %s\n", len, str);
}

/**
 * print_list - prints the content of a linked list
 * @h: The linked list in question
 * Return: Returns the count of the linked list
 */
size_t print_list(const list_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	for (i = 1; h->next != NULL; i++)
	{
		element(h);
		h = h->next;
	}
	element(h);
	return (i);
}
