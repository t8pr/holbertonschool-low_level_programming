#include "main.h"

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The string to be printed.
 *
 * Return: void
 */
void puts_half(char *str)
{
int len = 0;
int n, i;

/* 1. Find the total length of the string */
while (str[len] != '\0')
{
len++;
}

/* 2. Determine the starting point */
if (len % 2 == 0)
{
n = len / 2;
}
else
{
n = (len + 1) / 2;
}

/* 3. Print from index n to the end */
for (i = n; i < len; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
