#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;

/* 1. Find the end of dest (the index of the null byte) */
while (dest[i] != '\0')
{
i++;
}

/* 2. Append src to dest, starting at dest's null byte */
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

/* 3. Add the terminating null byte */
dest[i] = '\0';

return (dest);
}
