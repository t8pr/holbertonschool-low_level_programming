#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes.
 * @dest: The destination buffer.
 * @src: The source string.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

/* 1. Copy src to dest up to n bytes or end of src */
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

/* 2. If n is greater than src length, pad dest with null bytes */
for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
