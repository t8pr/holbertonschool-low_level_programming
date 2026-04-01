#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int i, j, len1 = 0, len2 = 0;

/* 1. Treat NULL as an empty string "" */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* 2. Measure length of s1 and s2 */
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

/* 3. Allocate memory: (len1 + len2 + 1) for the null terminator */
concat = malloc(sizeof(char) * (len1 + len2 + 1));

/* 4. Check for malloc failure */
if (concat == NULL)
return (NULL);

/* 5. Copy s1 into the new space */
for (i = 0; i < len1; i++)
concat[i] = s1[i];

/* 6. Copy s2 into the new space */
for (j = 0; j < len2; j++, i++)
concat[i] = s2[j];

/* 7. Add the null terminator at the very end */
concat[i] = '\0';

return (concat);
}
