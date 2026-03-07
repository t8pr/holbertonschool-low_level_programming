#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
unsigned int res = 0;
int found_digit = 0;

while (s[i] != '\0')
{
/* Handle signs */
if (s[i] == '-')
{
sign *= -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
found_digit = 1;
res = (res * 10) + (s[i] - '0');
}
/* If we already found digits and hit a non-digit, stop */
else if (found_digit)
{
break;
}
i++;
}

return (res * sign);
}
