#include "main.h"

/**
 * check_prime - checks if a number is divisible by any number up to n
 * @n: the number to check
 * @i: the current divisor to test
 *
 * Return: 1 if prime, 0 if not
 */
int check_prime(int n, int i)
{
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return (check_prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: the number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (check_prime(n, 2));
}
