#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = '0';

while (num <= '9')
{
putchar(num);
num++;
}
putchar('\n');

return (0);
}
