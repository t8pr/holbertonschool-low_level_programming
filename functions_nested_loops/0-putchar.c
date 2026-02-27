#include <stdio.h>

/**
 * main - Prints _putchar, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char text = "_putchar";
int i = 0;

while (text[i] != '\0')
{
putchar(text[i]);
i++;
}
putchar('\n');

return (0);
}
