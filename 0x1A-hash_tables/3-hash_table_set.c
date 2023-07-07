#include "hash_tables.h"

/**
 * han_col - handle collision if it occurs
 * @ht: The hash table
 * @key: The key of the hash node
 * @value: The value of the hash node
 * @index: The hash index
 * Return: Void
 */
void han_col(hash_table_t *ht, char *key, char *value, unsigned long int index)
{
	hash_node_t *new, *temp;

	temp = ht->array[index];
	while (temp && strcmp(temp->key, key) != 0)
		temp = temp->next;
	if (temp)
	{
		free(temp->value);
		temp->value = value;
	}
	else
	{
		new = malloc(sizeof(hash_node_t));
		if (!new)
		{
			free(key);
			free(value);
		}
		new->key = key;
		new->value = value;
		new->next = ht->array[index];
		ht->array[index] = new;
	}

}

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
	char *new_key, *new_value;
	hash_node_t *new;

	if (!key || !value || !ht || *key == '\0')
		return (0);

	new_value = strdup(value);
	if (!new_value)
		return (0);
	new_key = strdup(key);
	if (!new_key)
	{
		free(new_value);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (!(ht->array[index]))
	{
		new = malloc(sizeof(hash_node_t));
		if (!new)
		{
			free(new_value);
			free(new_key);
			return (0);
		}
		new->value = new_value;
		new->key = new_key;
		ht->array[index] = new;
	}
	else
		han_col(ht, new_key, new_value, index);
	return (1);
}
