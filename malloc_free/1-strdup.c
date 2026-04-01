#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 * or if str is NULL.
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i, len = 0;

/* 1. Return NULL if input string is NULL */
if (str == NULL)
return (NULL);

/* 2. Calculate the length of the string */
while (str[len] != '\0')
len++;

/* 3. Allocate memory (length + 1 for the null terminator '\0') */
dup = malloc(sizeof(char) * (len + 1));

/* 4. Check if malloc failed */
if (dup == NULL)
return (NULL);

/* 5. Copy the string into the new memory space */
for (i = 0; i <= len; i++)
{
dup[i] = str[i];
}

return (dup);
}
