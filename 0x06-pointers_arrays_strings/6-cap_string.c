#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str : string input
 *
 * Return: uppercase
 */

char *cap_string(char *str)
{
	char *ncp = str;
	int i = 0;
	char cary;

	while (str[i] != '\0')
	{
		cary = str[i];
		str[i] = toupper(cary);
		i++;
	}
	return (ncp);
}
