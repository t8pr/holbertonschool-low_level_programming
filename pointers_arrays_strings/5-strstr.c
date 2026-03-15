#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: the longer string to search through
 * @needle: the substring to find
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;

if (*needle == '\0')
return (haystack);

for (i = 0; haystack[i] != '\0'; i++)
{
/* If the first character matches, start checking the rest */
if (haystack[i] == needle[0])
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
/* If we reached the end of needle, we found the match */
if (needle[j] == '\0')
return (haystack + i);
}
}

return (NULL);
}
