#include "hash_tables.h"

/**
 * shash_table_create - create a sorted hash table object
 * @size: the size of the sorted hash table
 * Return: The address of the sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *new;

	new = malloc(sizeof(shash_table_t));
	if (!new)
		return (NULL);

	new->size = size;
	new->array = malloc(sizeof(shash_node_t *) * size);
	if (!(new->array))
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new->array[i] = NULL;

	new->shead = NULL;
	new->stail = NULL;
	return (new);
}

/**
 * shash_table_set - insert a shash_node_t object in a hash table index or a
 * linked list in a situation where there is already a node at that index
 * @ht: The hash table we are inserting the element
 * @key: The hash_node_t object key
 * @value: The value of the hash_node_t object
 * Return: The hash of the key
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	char *new_value, *new_key;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
		return (0);

	new_value = strdup(value);
	if (!new_value)
	{
		free(ht->array);
		free(ht);
		return (0);
	}
	new_key = strdup(key);
	if (!new_key)
	{
		free(new_value);
		free(ht->array);
		free(ht);
		return (0);
	}
	index = key_index((const unsigned char *) new_key, ht->size);
	insert_node(ht, new_key, new_value, index);

	return (1);
}

/**
 * insert_node - insert an element into an hash table
 * @ht: The hash table we want to insert into
 * @key: The key of the shash_node_t object
 * @value: The value of the shash_node_t
 * @index: The index of the shash_node_t key
 * Return: Void
 */
void insert_node(shash_table_t *ht, char *key, char *value,
		 unsigned long int index)
{
	shash_node_t *new;

	if (!ht->array[index])
	{
		new = malloc(sizeof(shash_node_t));
		if (!new)
		{
			free(key);
			free(value);
			return;
		}
		new->key = key;
		new->value = value;
		new->next = NULL;
		new->snext = NULL;
		new->sprev = NULL;
		ht->array[index] = new;
		ord_insert(ht, new);
	}
	else
	{
		han_col(ht, key, value, index);
	}
}



/**
 * han_col - handle collision if it occurs
 * @ht: The hash table
 * @key: The key of the hash node
 * @value: The value of the hash node
 * @index: The hash table index already having a value
 * Return: Void
 */
void han_col(shash_table_t *ht, char *key, char *value,
	     unsigned long int index)
{
	shash_node_t *temp, *new;

	temp = ht->array[index];
	while (temp && strcmp(temp->key, key) != 0)
		temp = temp->next;
	if (temp)
	{
		free(temp->value);
		free(temp->key);
		temp->value = value;
		temp->key = key;
	}
	else
	{
		new = malloc(sizeof(shash_node_t));
		if (!new)
		{
			free(ht->array);
			free(ht);
			free(key);
			free(value);
			return;
		}
		new->key = key;
		new->value = value;
		new->next = ht->array[index];
		new->sprev = ht->stail;
		new->snext = NULL;
		ht->array[index] = new;
		ord_insert(ht, new);
	}

}

/**
 * ord_insert - insert a new node into an ordered linked list
 * @ht: The hash table
 * @new: The node to be inserted in the ordered linked list
 * Return: Void
 */
void ord_insert(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *temp, *prev;

	temp = ht->shead;
	prev = NULL;
	if (!(temp))
	{
		ht->shead = new;
		ht->stail = new;
	}
	else
	{
		while (temp)
		{
			if (strcmp((new)->key, temp->key) < 0)
			{
				new->snext = temp;
				temp->sprev = new;
				new->sprev = prev;
				if (prev)
				{
					prev->snext = new;
				}
				else
					ht->shead = new;
				return;
			}
			prev = temp;
			temp = temp->snext;
		}
		if (!temp)
		{
			ht->stail->snext = new;
			new->snext = NULL;
			new->sprev = ht->stail;
			ht->stail = new;
		}
	}
}

/**
 * shash_table_get - get the value associated with a key from a hash
 * table
 * @ht: The hash table in question
 * @key: The retrieval key
 * Return: The value associated with the key or NULL if none is found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *head, *temp;

	if (!ht || !key || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);

	head = ht->array[index];
	if (!head)
		return (NULL);

	temp = head;
	while(temp)
	{
		if (strcmp(temp->key, key) == 0)
			break;
		temp = temp->next;
	}

	if (!temp)
		return (NULL);
	return (temp->value);
}

/**
 * shash_table_print - print the sorted linked list in a table
 * @ht: The hash table we want to print sorted linked list values from
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	temp = ht->shead;
	putchar('{');
	while (temp)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
		if (temp)
			printf(", ");
	}
	puts("}");
}

/**
 * shash_table_print_rev - print the hash table key value pairs in reverse
 * @ht: The hash table we want to print reverse linked list key value pairs
 * Return: Void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;

	temp = ht->stail;
	putchar('{');
	while (temp)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->sprev;
		if (temp)
			printf(", ");
	}
	puts("}");
}

/**
 * shash_table_delete - free the link allocated to a hash table
 * @ht: The hashtable we are to free
 * Return: Null
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp, *next = NULL;

	temp = ht->shead;

	while (temp)
	{
		next = temp->snext;
		free(temp->key);
		free(temp->value);
		free(temp);
		temp = next;
	}
	free(ht->array);
	free(ht);
}
