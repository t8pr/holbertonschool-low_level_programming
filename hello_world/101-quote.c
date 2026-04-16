#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints a specific quote to the standard error
 * without using printf or puts.
 *
 * Return: Always 1 (Success/Requirement)
 */
int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, msg, 59);
	return (1);
}
