#include "main.h"

/**
 * is_palindrome - return 1 if a string is paliidrome
 *
 * @s: input string
 *
 * Return : 1 if sucesses 0 not
 */

int is_palindrome(char *s)
{
	int len;
	int count = 0;

	len = strlen(s);
	--len;
	return (StrEva(s, len, count));
}

/**
 * StrEva - return 1 if a string is palidrome
 *
 * @s: input string
 * @i: string length
 * @c: counting compaired strings
 * Return: 1 if sucesses 0 not
 */

int StrEva(char *s, int i, int c)
{
	if (c > i)
		return (1);
	if (s[c] == s[i])
		return (StrEva(s, i - 1, c + 1));
	return (0);
}

