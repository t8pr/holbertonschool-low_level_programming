#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings with n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to concatenate
 *
 * Return: pointer to the new string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int i, j, len1 = 0, len2 = 0;

/* 1. Treat NULL as an empty string */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/* 2. Measure lengths */
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;

/* 3. Adjust n if it's greater than s2 length */
if (n >= len2)
n = len2;

/* 4. Allocate memory: len1 + n + 1 (for null terminator) */
concat = malloc(sizeof(char) * (len1 + n + 1));

/* 5. Check for malloc failure */
if (concat == NULL)
return (NULL);

/* 6. Copy s1 into new space */
for (i = 0; i < len1; i++)
concat[i] = s1[i];

/* 7. Copy n bytes of s2 */
for (j = 0; j < n; j++, i++)
concat[i] = s2[j];

/* 8. Null terminate the result */
concat[i] = '\0';

return (concat);
}
