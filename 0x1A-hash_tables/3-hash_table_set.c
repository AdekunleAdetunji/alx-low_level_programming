#include "hash_tables.h"

/**
 * hash_table_set - Adds elements to an hash table
 * @ht: The hash table to be updated
 * @key: The key to be used in determining the hash table index
 * @value: The value to be in the data field of the hash node
 * Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *temp;

	if (!key || !value || !ht)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	if (!(ht->array[index]))
		ht->array[index] = new;
	else
	{
		temp = ht->array[index];
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (1);
}
