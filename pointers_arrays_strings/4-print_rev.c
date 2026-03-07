#include "main.h"

/**
 * print_rev - Prints a string, in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 *
 * Return: void
 */
void print_rev(char *s)
{
int len = 0;

/* 1. Find the length of the string */
while (s[len] != '\0')
{
len++;
}

/* 2. Print from the last character back to the first */
for (len--; len >= 0; len--)
{
_putchar(s[len]);
}

_putchar('\n');
}
