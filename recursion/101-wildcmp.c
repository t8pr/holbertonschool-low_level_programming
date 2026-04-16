#include "main.h"

/**
 * wildcmp - Compares two strings with wildcard support.
 * @s1: The first string (normal string).
 * @s2: The second string (can contain *).
 *
 * Return: 1 if identical/match, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	/* Base case: reached the end of both strings */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If characters match, move to next in both */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* If we hit a wildcard in s2 */
	if (*s2 == '*')
	{
		/* Path A: Treat '*' as an empty string (skip it in s2) */
		/* Path B: '*' matches current s1 char (skip char in s1, keep '*' in s2) */
		/* We only check Path B if s1 isn't empty yet */
		if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
			return (1);
	}

	/* If characters don't match and no wildcard logic worked */
	return (0);
}
