#include "main.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @lowc : lowecase string input
 *
 * Return: uppercase
 */

char *string_toupper(char *lowc)
{
	int i = 0;
	char cary;

	while (lowc[i] != '\0')
	{
		cary = lowc[i];
		lowc[i] = toupper(cary);
		i++;
	}
	return (lowc);
}
