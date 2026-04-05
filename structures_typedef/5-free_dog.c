#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a struct dog
 * @d: Pointer to the dog to free
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
/* Free the duplicated strings first */
free(d->name);
free(d->owner);
/* Finally, free the structure itself */
free(d);
}
}
