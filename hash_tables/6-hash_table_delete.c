#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	/* Loop through every bucket in the array */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		/* Traverse and free the linked list at this index */
		while (node != NULL)
		{
			temp = node->next;
			/* Free the duplicated strings from hash_table_set */
			free(node->key);
			free(node->value);
			/* Free the node structure itself */
			free(node);
			node = temp;
		}
	}

	/* Free the array of pointers and finally the table structure */
	free(ht->array);
	free(ht);
}
