#include <stdio.h>

/**
 * main - prints the program name, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argc; /* We don't use argc here, so we cast it to void to avoid warnings */

printf("%s\n", argv[0]);

return (0);
}
