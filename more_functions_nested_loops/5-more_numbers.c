#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * Return: void
 */
void more_numbers(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
_putchar((j / 10) + '0'); /* First use: prints the '1' for 10-14 */
}
_putchar((j % 10) + '0'); /* Second use: prints the units digit */
}
_putchar('\n'); /* Third use: prints the newline after each row */
}
}
