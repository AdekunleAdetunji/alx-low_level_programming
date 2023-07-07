#include "hash_tables.h"

/**
 * hash_table_print - print the content of a hash table
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head, *temp;
	unsigned long int i, flag = 0;

	if (ht == NULL)
	{
		printf("{}");
		return;
	}
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		if (head)
		{
			if (flag == 1)
				printf(", ");
			temp = head;
			while (temp)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				if (temp != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	puts("}");
}
