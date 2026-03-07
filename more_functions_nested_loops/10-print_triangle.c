#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: The size of the triangle.
 *
 * Return: void
 */
void print_triangle(int size)
{
int row, column;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (row = 1; row <= size; row++)
{
/* Print the leading spaces */
for (column = 0; column < (size - row); column++)
{
_putchar(' ');
}

/* Print the hashes */
for (column = 0; column < row; column++)
{
_putchar('#');
}

_putchar('\n');
}
}
}
