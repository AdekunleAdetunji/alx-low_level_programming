#include "hash_tables.h"

/**
 * free_list - delete the linked list at a hash node
 * @head: The head node of the linked list
 * Return: Void
 */
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	temp = head;
	while (temp)
	{
		head = temp->next;
		free(temp->value);
		free(temp->key);
		free(temp);
		temp = head;
	}
}

/**
 * hash_table_delete - free an hash table
 * @ht: The hash table to be freed
 * Return: Void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
		if (ht->array[i] != NULL)
			free_list(ht->array[i]);
	free(ht->array);
	free(ht);
}
