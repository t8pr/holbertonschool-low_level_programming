#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table.
 *
 * Description: Prints the key/value pairs in the order they appear
 * in the array of the hash table. Format: {'key': 'value', ...}
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");

	/* Iterate through each bucket in the array */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		/* Traverse the linked list at this bucket if it exists */
		while (node != NULL)
		{
			/* Print comma only if we have already printed an item */
			if (comma_flag == 1)
				printf(", ");

			printf("'%s': '%s'", node->key, node->value);
			
			comma_flag = 1;
			node = node->next;
		}
	}

	printf("}\n");
}
