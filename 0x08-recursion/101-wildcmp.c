#include "main.h"

/**
 * wildcmp - compare two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: 1 if two strings are identical 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	if (*s1 == *s2)
		return (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1));
	return (0);
}
