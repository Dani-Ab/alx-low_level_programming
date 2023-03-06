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
	int i;

	for (i = 0; s[i] != '\n'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
