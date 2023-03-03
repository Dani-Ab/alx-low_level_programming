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
	/*long int cary;*/

	while (str[i])
	{
		while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] -= 13;
			i++;
		}
		if ((str[i] > 'm' && str[i] <= 'z') || (str[i] > 'M' && str[i] <= 'Z'))
		{
			str[i] += 13;
		}
	i++;
	}
	return (str);
}
