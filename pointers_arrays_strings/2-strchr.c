#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to find
 *
 * Return: a pointer to the first occurrence of c,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
do {
if (*s == c)
{
return (s);
}
} while (*s++);

return (NULL);
}
