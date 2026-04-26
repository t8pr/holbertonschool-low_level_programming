#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: A pointer to the hash table.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the element,
 * or NULL if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	/* Basic validation */
	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* Calculate the index where the key should be */
	index = key_index((const unsigned char *)key, ht->size);

	/* Go to the bucket and traverse the linked list */
	node = ht->array[index];
	while (node != NULL)
	{
		/* Check if this node's key matches our search key */
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	/* Key was not found in the list */
	return (NULL);
}
