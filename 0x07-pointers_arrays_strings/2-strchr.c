#include "main.h"

/**
 * _strchr - locate a charcter in a string.
 * @s: string input to cheke chaaracter from
 * @c: character to check on the string
 *
 * Return: string
 */

char *_strchr(char *s, char c)
{
	char ls = *s;

	while (*s)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
		return (s);
	return (NULL);
}
