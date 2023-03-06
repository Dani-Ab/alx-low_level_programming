#include "main.h"

/**
 * _strspn - gets the length of a prefix substring bytes
 * @s: string to calc substring length from
 * @accept: string containing maching bytes
 *
 * Return: length of matching
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (*s)
	{
		for (i = 0; ((accept[i]) && (*s  == ' ')); i++)
		{
			if (*s == accept[i])
			{
				count++;
			}
		}
		s++;
	}
	return (count);
}
