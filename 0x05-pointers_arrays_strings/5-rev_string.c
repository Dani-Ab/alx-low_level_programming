#include "main.h"

/**
  * rev_string - Reverses a given string
  * @s: given string
  *
  * Return: othing
  */

void rev_string(char *s)
{
	int i, j = 0;
	char r;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	j = i;
	while (i >= 0)
	{
		r  = *(s +i);
		*(s+(j - i)) = *(s+i);
		i--;
	}
	*(s + j++) = '\0';
}
