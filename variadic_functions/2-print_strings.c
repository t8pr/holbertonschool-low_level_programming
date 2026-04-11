#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: a variable number of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;
char *str;

va_start(ap, n);

for (i = 0; i < n; i++)
{
str = va_arg(ap, char *);

/* If the string is NULL, print (nil) */
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}

/* Print separator if it exists and we aren't at the last string */
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}

printf("\n");

va_end(ap);
}
