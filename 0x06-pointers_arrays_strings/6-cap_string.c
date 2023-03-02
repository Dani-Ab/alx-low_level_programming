#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str : string input
 *
 * Return: uppercase
 */

char *cap_string(char *str)
{
	char spp[] = {'\t', '\n', ' ', ',', ';', '!',
		      '.', '?', '\"', '(', ')', '{', '}'};
	int i = 0;
	int m = 13;
	int n;
	char cary;

	while (str[i])
	{
		n = 0;
		while (n < m)
		{
			if ((i == 0 || str[i - 1] == spp[n]))
			{
				cary = str[i];
				str[i] = toupper(cary);
			}
			n++;
		}
	i++;
	}
	return (str);
}
