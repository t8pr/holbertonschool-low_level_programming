#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the starting value (included)
 * @max: the ending value (included)
 *
 * Return: pointer to the newly created array, or NULL if min > max or fails
 */
int *array_range(int min, int max)
{
int *array;
int i, size;

/* 1. Validate the range */
if (min > max)
return (NULL);

/* 2. Calculate the number of elements */
size = max - min + 1;

/* 3. Allocate memory for 'size' integers */
array = malloc(sizeof(int) * size);

/* 4. Check if malloc failed */
if (array == NULL)
return (NULL);

/* 5. Fill the array with values from min to max */
for (i = 0; i < size; i++)
{
array[i] = min++;
}

return (array);
}
