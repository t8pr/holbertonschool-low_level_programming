#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: the double pointer to modify
 * @to: the address to assign to the pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}