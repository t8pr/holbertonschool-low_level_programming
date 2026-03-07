#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;

/* 1. Find the end of dest */
while (dest[i] != '\0')
{
i++;
}

/* 2. Append src to dest, but only up to n bytes */
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

/* 3. Always null-terminate the result */
dest[i] = '\0';

return (dest);
}
