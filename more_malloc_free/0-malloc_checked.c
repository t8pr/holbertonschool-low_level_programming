#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes to allocate
 *
 * Return: a pointer to the allocated memory.
 * if malloc fails, cause normal process termination with status 98.
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

/* 1. Attempt to allocate memory */
ptr = malloc(b);

/* 2. Check if the allocation failed */
if (ptr == NULL)
{
/* 3. Terminate the process with status 98 */
exit(98);
}

/* 4. Return the pointer if successful */
return (ptr);
}
