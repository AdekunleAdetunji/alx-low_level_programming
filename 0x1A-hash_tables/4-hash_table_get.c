#include "hash_tables.h"

/**
 * hash_table_get - retrieve a hash node from a hash table
 * @ht: The hash table we are to search
 * @key: The key to be used in searching the hash table
 * Return: Value associated with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, tab_size;
	hash_node_t *linked_list, *temp;

	tab_size = ht->size;
	index = key_index((const unsigned char *) key, tab_size);
	linked_list = ht->array[index];
	if (linked_list)
	{
		temp = linked_list;
		while (temp && strcmp(temp->key, key) != 0)
			temp = temp->next;
	}
	else
		return (NULL);
	if (!temp)
		return (NULL);

	return (temp->value);
}
