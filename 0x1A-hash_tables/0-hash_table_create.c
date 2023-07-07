#include "hash_tables.h"

/**
 * hash_table_create - This function creates an hash table
 * @size: The size of the hash table to be created
 * Return: A pointer to the hash table created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_table;
	hash_node_t *array;

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

	array = malloc(sizeof(hash_node_t) * size);
	if (!array)
		return (NULL);

	new_table->size = size;
	new_table->array = &array;
	for (i = 0; i < new_table->size; i++)
		new_table->array[i] = NULL;

	return (new_table);
}
