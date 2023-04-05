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
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 != '\0' && *s2 != '\0')
		return (wildcmp(s1, s2 + 1));
	if (*s1 == '*' || *s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 2));
	if (*s1 == '*')
		return (wildcmp(s1 + 1, s2));
	return (0);
}
