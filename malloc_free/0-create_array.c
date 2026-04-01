#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it with a char
 * @size: the size of the array to create
 * @c: the char to initialize the array with
 *
 * Return: pointer to the array, or NULL if size is 0 or if allocation fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	/* 1. Validate the size */
	if (size == 0)
		return (NULL);

	/* 2. Allocate memory on the heap */
	array = malloc(sizeof(char) * size);

	/* 3. Check if malloc failed */
	if (array == NULL)
		return (NULL);

	/* 4. Initialize the array with the specific char */
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	/* 5. Return the pointer to the newly created array */
	return (array);
}