#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters passed to the function
 * @...: a variable number of parameters to calculate the sum of
 *
 * Return: the sum of all parameters, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i;
int sum = 0;

if (n == 0)
return (0);

/* Initialize the argument list */
va_start(ap, n);

for (i = 0; i < n; i++)
{
/* Access the next argument in the list */
sum += va_arg(ap, int);
}

/* Clean up the list */
va_end(ap);

return (sum);
}
