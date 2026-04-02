#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and sets it to zero
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory, or NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int total_size, i;

/* 1. Return NULL if nmemb or size is 0 */
if (nmemb == 0 || size == 0)
return (NULL);

/* 2. Calculate total bytes needed */
total_size = nmemb * size;

/* 3. Allocate the memory */
ptr = malloc(total_size);

/* 4. Check for malloc failure */
if (ptr == NULL)
return (NULL);

/* 5. Initialize memory to zero */
for (i = 0; i < total_size; i++)
{
ptr[i] = 0;
}

return ((void *)ptr);
}
