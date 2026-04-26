#include "hash_tables.h"

/**
 * key_index - Gives the index of a key.
 * @key: The key to get the index for.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored
 * in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);

	/* Get the hash value using the djb2 algorithm */
	hash_value = hash_djb2(key);

	/* Use modulo to find the index within the array boundaries */
	return (hash_value % size);
}
