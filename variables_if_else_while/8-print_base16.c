#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num = '0';
char letter = 'a';

while (num <= '9')
{
putchar(num);
num++;
}

while (letter <= 'f')
{
putchar(letter);
letter++;
}

putchar('\n');

return (0);
}
