#include "main.h"

/**
 * _strlen - calculates the length of a string.
 * @s: array pointer.
 * Return: length of the string
 */
int _strlen(char *s)
{
	int cnt = 0;

	while (*s != '\0')
	{
		cnt++;
		s++;
	}
	return (cnt);
}
