#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}

/* Recursive call: dive deeper into the string first */
_print_rev_recursion(s + 1);

/* Unwinding: print character as the stack returns */
_putchar(*s);
}
