#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: a variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

va_start(ap, n);

for (i = 0; i < n; i++)
{
/* Print the current number */
printf("%d", va_arg(ap, int));

/* Print separator if it exists and we aren't at the last number */
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}

printf("\n");

va_end(ap);
}
