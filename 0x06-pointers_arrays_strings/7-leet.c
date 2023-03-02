#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str : string input
 *
 * Return: encoded string
 */

char *leet(char *str)
{
	int i;
	char *let = str;
	char a[] = { 'A', 'E', 'L', 'O', 'T' };
	char n[] = { 4, 3, 1, 0, 7 };

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == a[i] || *str == a[i] + 32)
				*str = n[i] + '0';
		}
		str++;
	}
	return (let);
}
