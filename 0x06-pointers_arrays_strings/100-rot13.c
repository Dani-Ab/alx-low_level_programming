#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @str : string input
 *
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i = 0;
	char *let = str;
	char tmp;

	while (str[i])
	{
		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] > 'm' && str[i] <= 'z') || (str[i] > 'M' && str[i] <= 'Z'))
				str[i] -= 13;
			else
				str[i] += 13;
		}
		i++;
	}
	return (let);
}
