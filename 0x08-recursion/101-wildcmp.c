#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if the strings can be
 * considered identical, otherwise return 0. s2 can contain the special
 * character * that can replace any string (including an empty string)
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		else if (!*s1)
			return (wildcmp(s1, s2 + 1));
		return (1);
		else
			return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
